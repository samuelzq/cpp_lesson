/**
 * https://www.luogu.com.cn/problem/CF909A
 *
 * @File:   CF909A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s1, s2, s3;

    cin >> s1 >> s2;

    s3 += s1[0];

    for (int i = 1; i < s1.length(); i++)
    {
        if (s1[i] < s2[0])
            s3 += s1[i];
        else
            break;
    }
    cout << s3 << s2[0] << endl;
    return 0;
}
