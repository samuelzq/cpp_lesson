/**
 * https://www.luogu.com.cn/problem/P9459
 *
 * @File:   P9459.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

const string D("ding"), Z("zhen");
int main(void)
{
    int n;

    cin >> n;
    while (n--)
    {
        string s1, s2, s3, s4;

        cin >> s1 >> s2 >> s3 >> s4;

        if (s1[0] == 'y' && s2[0] == 'y' && s3 == D && s4 == Z)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
