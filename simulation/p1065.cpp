/**
 * https://www.luogu.com.cn/problem/P1065
 *
 * @File:   p1065.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

#define maxn 50
using namespace std;

int ans = 0;
int worklist[maxn * maxn] = {0};  // 记录所有的工作安排
int worknumber[maxn][maxn] = {0}; // 每个工作工作的机台顺序
int worktime[maxn][maxn] = {0};   // 每个工作在每个机台上的工作时间
int work_step[maxn] = {0};       // 记录每个工件当前的工序
int lasttime[maxn] = {0};        // 记录每台机器停机的最后时间
bool timeline[maxn][maxn * maxn*10] = {0};  // 模拟每台机器每个工序需要的时间

/*
 * 检测某台机器上在指定的时间段是否可以使用
 * begin：起始时间
 * end： 结束时间
 * id： 机器编号
 */
bool check(int begin, int end, int id)
{
    for (int time = begin; time <= end; time++)
        if (timeline[id][time])
            return false;
    return true;
}

int main(void)
{
    int n,m;

    cin >> m >> n;
    for (int i = 1; i <= n * m; i++)
        cin >> worklist[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> worknumber[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> worktime[i][j];

    for (int i = 1; i <= n * m; i++)
    {
        int cur_number;
        int cost_time;
        int cur_item = worklist[i];    // 当前的工作编号
        work_step[cur_item]++;
        cur_number = worknumber[cur_item][work_step[cur_item]];
        cost_time = worktime[cur_item][work_step[cur_item]];

        for (int time = lasttime[cur_item] + 1; ; time++)//扫描时间轴
            if (check(time, time + cost_time - 1, cur_number)){
                for (int mark = time; mark <= time + cost_time - 1; mark++)
                    timeline[cur_number][mark] = true;
                lasttime[cur_item] = time + cost_time - 1;
                break;
            }
    }

    for (int i = 1; i <= n; i++)
        ans = max(ans, lasttime[i]);

    cout << ans << endl;
    return 0;
}
