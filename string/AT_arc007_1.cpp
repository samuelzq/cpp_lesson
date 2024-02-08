/**
 * https://www.luogu.com.cn/problem/AT_arc007_1
 *
 * @File:   AT_arc007_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    char t, c;

    cin >> c;

    while (cin >> t)
    {
        if (t != c)
            cout << t;
    }
    cout << endl;
    return 0;
}
