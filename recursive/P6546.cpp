/**
 *
 * @File:   P6546.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <iostream>
using namespace std;

int main(void)
{
	int a, b, v;

	cin >> a >> b >> v;

	cout << (v - b - 1) / (a - b) + 1 << endl;
	return 0;
}
