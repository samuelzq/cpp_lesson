/**
 * https://www.luogu.com.cn/problem/CF514A
 *
 * @File:   CF514A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string num;

    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] > '4')
            num[i] = '0' + (9 - (num[i] - '0'));
    }
    if (num[0] == '0')
        num[0] = '9';
    cout << num << endl;
    return 0;
}
