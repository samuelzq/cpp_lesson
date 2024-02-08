/**
 * https://www.luogu.com.cn/problem/AT_code_formula_2014_qualB_b
 *
 * @File:   AT_code_formula_2014_qualB_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    int o, e;
    string num;

    cin >> num;

    o = e = 0;
    for (int i = 1; i <= num.length(); i++)
    {
        if (i % 2)
            o += num[num.length() - i] - '0';
        else
            e += num[num.length() - i] - '0';
    }
    cout << e << ' ' << o << endl;
    return 0;
}
