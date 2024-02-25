/**
 * https://www.luogu.com.cn/problem/P8506
 *
 * @File:   P8506.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

bool isHead1(string &str)
{
    int i = 0;
    for (char c : str)
    {
        i++;
        if (c != ' ')
            break;
    }

    if (i == str.length() || str[i - 1] != '#' || str[i] != ' ')
        return false;

    for (; i < str.length(); i++)
    {
        if (str[i] != ' ')
            break;
    }
    if (i == str.length())
        return false;
    else
        return true;
}

int main(void)
{
    string str;
    int n, cnt;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cnt = 0;
    while (n--)
    {
        getline(cin, str);
        if (isHead1(str))
        {
            //cout << str << endl;
            cnt++;
        }
        //cnt += isHead1(str) ? 1 : 0;
    }
    cout << cnt << endl;
    return 0;
}
