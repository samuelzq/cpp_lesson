/**
 * https://www.luogu.com.cn/problem/AT_codefestival_2016_qualC_a
 *
 * @File:   AT_codefestival_2016_qualC_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    bool findc = false;
    string str;

    cin >> str;
    for (char c : str)
    {
        if (c == 'C')
            findc = true;

        if (c == 'F' && findc)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
