/**
 * https://www.luogu.com.cn/problem/CF32B
 *
 * @File:   CF32B.cpp
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
    for (int i = 0; i < num.length();)
    {
        if (num[i] == '.')
        {
            cout << 0;
            i += 1;
        }
        else
        {
            if (num[i + 1] == '-')
                cout << 2;
            else
                cout << 1;
            i += 2;
        }
    }
    cout << endl;
    return 0;
}
