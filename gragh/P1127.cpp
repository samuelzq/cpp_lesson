/**
 * https://www.luogu.com.cn/problem/P1127
 *
 * @File:   P1127.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-25
 *
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
string str[N], out[N];
int tot, lst[30], nxt[N];   // 邻接链表
int to[N];                    // 每条边的下一个节点
int no[N];                    // 每条边的编号
int d[N];                     // 每个节点的度in-out
int lans;                     // 统计多少条边被加入的输出buf中
bool use[N];

// 函数用于向图中添加一条有向边,链表结束的标志是0.因此nxt[0]被保留
inline void add(int x, int y, int b)
{
	tot++;                   // 增加边的编号
	to[tot] = y;             // 设置第 tot 条边的终点是 y
	no[tot] = b;             // 将该边与字符串编号 b 关联
	d[x]++;                  // 增加节点 x 的出度
	d[y]--;                  // 减少节点 y 的入度
	nxt[tot] = lst[x];       // 当前边的下一个邻接边是 lst[x]
	lst[x] = tot;            // 更新 x 的邻接链表头为当前边的编号
}

// 遍历图，将最先遍历的边加入输出
void dfs(int g)
{
	for (int i = lst[g]; i; i = nxt[i]) {
		if (!use[no[i]]) {              // 如果这条边没有被使用过
			use[no[i]] = true;          // 标记这条边为已使用
			dfs(to[i]);                 // 递归地访问这条边的终点
			lans++;                     // 处理完一个节点后增加计数
			out[lans] = str[no[i]];     // 将与该边相关的字符串存储到答案数组中
		}
	}
}

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> str[i];

	sort(str + 1, str + n + 1);

	for (int i = n; i > 0; i--) {
		char l, r;
		l = str[i][0] - 'a' + 1;
		r = str[i][str[i].size() - 1] - 'a' + 1;
		add(l, r, i);
	}

	int b = 0;
	b = str[1][0] - 'a' + 1;           // 如果存在欧拉环路，字典最小的边开始
	for (int i =  1; i <= 26; i++) {
		if (d[i] == 1) {           // 欧拉路径的起点
			b = i;
			break;
		}
	}

	dfs(b);

	for (int i = 1; i <= n; i++) {
		if (use[i] == 0) {         // 存在未访问的边
			cout << "***" << endl;
			return 0;
		}
	}

	for (int i = n; i > 1; i--)
		cout << out[i] << '.';
	cout << out[1] << endl;
	return 0;
}
