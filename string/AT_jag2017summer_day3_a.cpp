/**
 * https://www.luogu.com.cn/problem/AT_jag2017summer_day3_a
 *
 * @File:   AT_jag2017summer_day3_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int cnt = 0;
    string str;

    cin >> str;
    for (char c : str)
    {
        if (c == '(')
            cnt++;
        else if (c == ')')
            cnt--;
        else if (c == '*')
            break;
    }

    cout << cnt << endl;
    return 0;
}
