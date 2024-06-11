/**
 * https://www.luogu.com.cn/problem/P8682
 *
 * @File:   P8682.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-11
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int gcd(int a, int b)
{
	if (a > b)
		return b ? gcd(b, a % b) : a;
	else
		return a ? gcd(a, b % a) : b;

}

int main(void)
{
	int n, g;

	cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    if (a[1] == a[0]) {
        cout << n << endl;
        return 0;
    }

    g = a[1] - a[0];
	for (int i = 2; i < n; i++) {
		g = gcd(g, a[i] - a[i - 1]);
	}
	cout << (a[n - 1] - a[0]) / g + 1 << endl;
	return 0;
}

