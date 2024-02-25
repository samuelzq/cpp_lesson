/**
 * https://www.luogu.com.cn/problem/P3612
 *
 * @File:   P3612.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-17
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n, i, l;
    string str;

    cin >> str >> n;
    i = str.length();

    if (i >= n)
    {
        cout << str[n - 1] << endl;
        return 0;
    }

    while (n > i)
    {
        l = i;
        while (n > l)
            l *= 2;
        l /= 2;

        // 由于先拷贝了最后一个字符，
        // 因此如果n落在复制的这段区间，其在前一个区间对对应的位置应该向前移动一个位置
        n = n - 1 - l;
        if (n == 0)  // n为0时对应第一部分的最后一个字符
            n = l;
    }

    cout << str[n - 1] << endl;
    return 0;
}
