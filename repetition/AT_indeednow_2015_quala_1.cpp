/**
 * https://www.luogu.com.cn/problem/AT_indeednow_2015_quala_1
 *
 * @File:   AT_indeednow_2015_quala_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, ca, cb;

    cin >> a >> b;

    ca = cb = 0;
    while (a)
    {
        ca++;
        a /= 10;
    }

    while (b)
    {
        cb++;
        b /= 10;
    }

    cout << ca * cb << endl;
    return 0;
}
