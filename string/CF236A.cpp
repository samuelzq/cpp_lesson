/**
 * https://www.luogu.com.cn/problem/CF236A
 *
 * @File:   CF236A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>

using namespace std;

int a[26];

int main(void)
{
    char c;
    int cnt = 0;

    while (cin >> c)
    {
        a[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        cnt += (a[i]) ? 1 : 0;
    if (cnt % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}
