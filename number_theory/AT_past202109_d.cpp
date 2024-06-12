/**
 *
 * @File:   AT_past202109_d.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <iostream>
using namespace std;

int numberD(int n)
{
	int c = 0;
	for (int d = 1; d <= n; d++) {
		if (n % d == 0) {
			c++;
		}
	}
	return c;
}

int main(void)
{
	int x, y;

	cin >> x >> y;
	if (numberD(x) > numberD(y))
		cout << 'X' << endl;
	else if (numberD(x) < numberD(y))
		cout << 'Y' << endl;
	else
		cout << 'Z' << endl;
	return 0;
}
