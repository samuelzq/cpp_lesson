/**
 * https://www.luogu.com.cn/problem/AT_tenka1_2017_a
 *
 * @File:   AT_tenka1_2017_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int cnt;
    string str;

    cin >> str;
    cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
