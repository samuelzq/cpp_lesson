/**
 * https://www.luogu.com.cn/problem/CF5A
 *
 * @File:   CF5A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-01
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int cnt, l;

    cnt = l = 0;

    while (getline(cin, str))
    {
        if (str[0] == '+')
        {
            cnt++;
        }
        else if (str[0] == '-')
        {
            cnt--;
        }
        else if (str[0] == '\n')
        {
            break;
        }
        else
        {
            int f = str.find_first_of(':');
            //cout << f << endl;
            l += (str.length() - 1 - f) * cnt;
        }
    }
    cout << l << endl;
    return 0;
}
