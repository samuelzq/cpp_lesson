/**
 * https://www.luogu.com.cn/problem/P1621
 *
 * @File:   P1621.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

int p[100005];
int m[100005] = {0};
bool is_prime[100005] = {0};

void init(int n)
{
	is_prime[0] = is_prime[1] = 1;

	for (int i = 2; i * i <= n; i++) {
		if (is_prime[i])
			continue;
		for (int j = i + i; j <= n; j += i)
			is_prime[j] = 1;
	}
}

int find(int x)
{
	return (x == p[x]) ? x : p[x] = find(p[x]);
}

int merge(int x, int y)
{
	int fx, fy;

	fx = find(x);
	fy = find(y);

	return p[fy] = fx;
}

int main(void)
{
	int a, b, f;

	cin >> a >> b >> f;

	for (int i = 0; i <= b; i++)
		p[i] = i;

	// 将区间[a, b]之内大于f的质数的倍数归入每个质数的并查集
	// 注意：如果某个和数是多个质数的倍数，则归入最大的那个质因数
	// 的并查集
	init(b);
	for (int i = f; i <= b; i++) {
		if (is_prime[i])
			continue;
		for (int j = i; j <= b; j += i) {
			merge(i, j);
		}
	}

	int out = 0;

	// 统计并查集的个数
	for (int i = a; i <= b; i++) {
		//cout << i << '-' << find(i) << endl;
		m[find(i)] = 1;
	}

	// 大于f的所有和数都归入了f，小于f的数不属于任何一个集合
	for (int i = min(f, a); i <= b; i++) {
		out += m[i];
	}

	cout << out << endl;
	return 0;
}
