/**
 * https://www.luogu.com.cn/problem/AT_test001_b
 *
 * @File:   AT_test001_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-26
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    char c1, c2;

    cin >> c1;

    while (cin >> c2)
    {
        if (c2 != c1)
            cout << c2;
    }
    cout << endl;
    return 0;
}
