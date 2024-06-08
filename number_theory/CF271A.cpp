/**
 * https://www.luogu.com.cn/problem/CF271A
 *
 * @File:   CF271A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

bool diff(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return false; // 如果找到重复，返回false
            }
        }
    }
    return true; // 如果没有重复，返回true
}

int main(void)
{
    int y;

    cin >> y;
    while (y++) {
        int a[4];
        a[0] = y % 10;
        a[1] = (y / 10) % 10;
        a[2] = (y / 100) % 10;
        a[3] = y / 1000;

        if (diff(a, 4)) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}
