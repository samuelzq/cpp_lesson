/**
 * https://www.luogu.com.cn/problem/AT_njpc2017_a
 *
 * @File:   AT_njpc2017_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-26
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int l;
    string str;

    cin >> l >> str;

    if (l <= str.length())
        str.resize(l);

    cout << str << endl;
    return 0;
}
