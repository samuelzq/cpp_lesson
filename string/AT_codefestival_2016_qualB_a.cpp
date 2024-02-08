/**
 * https://www.luogu.com.cn/problem/AT_codefestival_2016_qualB_a
 *
 * @File:   AT_codefestival_2016_qualB_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1 = "CODEFESTIVAL2016";
    string str2;
    int cnt = 0;

    cin >> str2;

    for (int i = 0; i < 16; i++)
    {
        if (str1[i] != str2[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
