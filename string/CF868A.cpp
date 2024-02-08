/**
 * https://www.luogu.com.cn/problem/CF868A
 *
 * @File:   CF868A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    int n;

    cin >> s >> n;

    while (n--){
        string t;
        cin >> t;

        if (s[0] != 0 || s[1] != 0)
        {
            if (s == t)
                s[0] = s[1] = 0;
            if (s[0] == t[0] || s[0] == t[1])
                s[0] = 0;
            if (s[1] == t[0] || s[1] == t[0])
                s[1] = 0;
        }
    }
    if (s[0] == 0 && s[1] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
