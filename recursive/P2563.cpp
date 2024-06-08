/**
 * https://www.luogu.com.cn/problem/P2563
 *
 * @File:   P2563.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-26
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N 203
int k, p[N], f[N][N], prime[N] = {0};

void init()
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i <= N; i++) {
        if (!prime[i] && i * i <= N) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = 1;
        }
    }

    k = 0;
    p[k++] = 2;
    for (int i = 3; i <= N; i += 2) {
        if (!prime[i])
            p[k++] = i;
    }
}

//从数b开始拆分数x
void dfs(int x, int b) {
    if(f[x][b])
        return;
    //如果数x是质数，方案+1
	if (!prime[x])
        f[x][b]++;

    //从b开始搜索质数表
	for (int i = b; i <= k; i++) {
    	//如果下一次要拆分的数x-p[i]比质数小，结束。
		if (p[i] > x - p[i])
            return;
		//拆分，并传入下一次最小拆分值i
        dfs(x - p[i], i);
        //汇总结果
		f[x][b] += f[x - p[i]][i];
	}
	return;
}

int main() {
	int n;

    init();
	while (cin >> n) {
		dfs(n, 0);
		cout << f[n][0] << endl;
	}
	return 0;
}
