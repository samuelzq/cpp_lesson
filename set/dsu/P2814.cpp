/**
 * https://www.luogu.com.cn/problem/P2814
 *
 * @File:   P2814.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-21
 *
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 50004;
int p[N];
string name[N];           // 依次记录输入的人名
map<string, int> person;  // 记录每个人名在人名表中的位置
int cnt = 0;

int find(int x)
{
	return (x == p[x]) ? x : p[x] = find(p[x]);
}

void merge(int x, int y)
{
	int px, py;

//#	cout << "Merge " << x << ' ' << y << '\n';
	px = find(x);
	py = find(y);

	if (px != py)
		p[y] = px;
}

int main(void)
{
	char ops;

	for (int i = 0; i < N; i++)
		p[i] = i;

	do {
		string father;
		string son;
		int fidx, sidx;
		cin >> ops;
		if (ops == '$')
			break;
		else if (ops == '#') {
			cin >> father;
			fidx = person[father];
			if (fidx == 0) {
				//cout << "Add father " << father << '\n';
				person[father] = ++cnt;
				fidx = cnt;
				name[cnt] = father;
			}
		} else if (ops == '+') {
			string son;
			int sidx;
			cin >> son;
			sidx = person[son];
			if (sidx == 0) {
				//cout << "Add son " << son << '\n';
				person[son] = ++cnt;
				sidx = cnt;
				name[cnt] = son;
			}
			merge(fidx, sidx);
		} else if (ops == '?') {
			cin >> son;
			sidx = person[son];
			fidx = find(sidx);
			cout << name[sidx] << ' ' << name[fidx] << '\n';
		}
	} while (1);
	cout << endl;
	return 0;
}
