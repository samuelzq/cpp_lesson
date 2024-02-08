/**
 * https://www.luogu.com.cn/problem/CF45A
 *
 * @File:   CF45A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-27
 *
 */
#include <iostream>
#include <string>

using namespace std;

string mon[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(void)
{
    string m;
    int i, k;

    cin >> m >> k;

    for (i = 0; i < 12; i++)
    {
        if (mon[i] == m)
            break;
    }

    i = (i + k) % 12;
    cout << mon[i] << endl;
    return 0;
}
