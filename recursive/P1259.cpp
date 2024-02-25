/**
 * https://www.luogu.com.cn/problem/P1259
 *
 * @File:   P1259.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

void print(const char *s, int n)
{
    for (int i = 0; i < n; i++)
        cout << s;
}

int main(void)
{
    int n, i;

    cin >> n;

    print("o", n);
    print("*", n);
    print("-", 2);
    cout << endl;
    for (i = n; i > 4; i--)
    {
        print("o", i - 1);
        print("-", 2);
        print("*", i - 1);
        print("o*", n - i + 1);
        cout << endl;
        print("o", i - 1);
        print("*", i - 1);
        print("-", 2);
        print("o*", n - i + 1);
        cout << endl;
    }
    cout << "ooo--***o*";
    print("o*", n - i);
    cout << endl;
    cout << "ooo*o**--*";
    print("o*", n - i);
    cout << endl;
    cout << "o--*o**oo*";
    print("o*", n - i);
    cout << endl;
    cout << "o*o*o*--o*";
    print("o*", n - i);
    cout << endl;
    cout << "--o*o*o*o*";
    print("o*", n - i);
    cout << endl;
    return 0;
}
