/**
 * https://www.luogu.com.cn/problem/CF266A
 *
 * @File:   CF266A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, cnt;
    char c;
    string str;

    cin >> n >> str;
    cnt = 0;
    c = 0;

    for (int i = 0; i < n; i++)
    {
        if (c == str[i])
            cnt++;
        c = str[i];
    }
    cout << cnt << endl;
    return 0;
}
