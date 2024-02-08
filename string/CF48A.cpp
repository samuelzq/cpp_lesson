/**
 *  https://www.luogu.com.cn/problem/CF48A
 *
 * @File:   CF48A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;
const string r = "rock";
const string s = "scissors";
const string p = "paper";

int main(void)
{
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    if (str1 == r && str2 == s && str3 == s)
    {
        cout << 'F';
    }
    else if (str1 == s && str2 == p && str3 == p)
    {
        cout << 'F';
    }
    else if (str1 == p && str2 == r && str3 == r)
    {
        cout << 'F';
    }
    else if (str2 == r && str1 == s && str3 == s)
    {
        cout << 'M';
    }
    else if (str2 == s && str1 == p && str3 == p)
    {
        cout << 'M';
    }
    else if (str2 == p && str1 == r && str3 == r)
    {
        cout << 'M';
    }
    else if (str3 == r && str1 == s && str2 == s)
    {
        cout << 'S';
    }
    else if (str3 == s && str1 == p && str2 == p)
    {
        cout << 'S';
    }
    else if (str3 == p && str1 == r && str2 == r)
    {
        cout << 'S';
    }
    else
    {
        cout << '?';
    }
    cout << endl;
    return 0;
}
