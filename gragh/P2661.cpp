/**
 * https://www.luogu.com.cn/problem/P2661
 *
 * @File:   P2661.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N 200005
int in[N] = {0};
int vis[N] = {0};
vector<int> l;
int adjList[N];  // 邻接表

bool topsort(int n)
{
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		if (in[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		l.push_back(node);
		vis[node] = 1;

		int i = adjList[node];
		if (--in[i] == 0)
			q.push(i);
	}

	if (l.size() != n)
		return false;
	else
		return true;
}

// 使用BFS查找最小环
int findShortestCycle(int n)
{
	int minCycleLength = INT_MAX;

	// 遍历每一个节点作为起点
	for (int i = 1; i <= n; i++) {
		queue<int> q;
		int dist = 0;

		if (vis[i])
			continue;

		q.push(i);

		// BFS
		while (!q.empty()) {
			int node = q.front();
			q.pop();

			dist++;
			int neighbor = adjList[node];
			if (neighbor == i) {
				minCycleLength = min(minCycleLength, dist);
				break;
			}
			q.push(neighbor);
			vis[neighbor] = 1;
		}
	}

	return minCycleLength == INT_MAX ? -1 : minCycleLength;  // 如果没有环，返回-1
}

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		adjList[i] = (x);
		in[x]++;
	}
	topsort(n);
	cout << findShortestCycle(n) << endl;
	return 0;
}
