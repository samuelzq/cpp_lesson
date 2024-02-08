/**
 * https://www.luogu.com.cn/problem/CF53A
 *
 * @File:   CF53A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

string str[110];

int main(void)
{
    string pre;
    int n;

    cin >> pre >> n;

    for (int i = 0; i < n; i++)
        cin >> str[i];

    sort(str, str + n);

    for (int i = 0; i < n; i++)
    {
        int j;
        if (str[i].length() < pre.length())
            continue;

        for (j = 0; j < pre.length(); j++)
        {
            if (pre[j] != str[i][j])
                break;
        }
        if (j == pre.length())
        {
            cout << str[i] << endl;
            return 0;
        }
    }

    cout << pre << endl;
    return 0;
}
