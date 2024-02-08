/**
 * https://www.luogu.com.cn/problem/AT_abc090_b
 *
 * @File:   AT_abc090_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a, b, cnt;
    string str;

    cin >> a >> b;

    cnt = b - a + 1;
    for (int i = a; i <= b; i++)
    {
        int l;
        str = to_string(i);
        l = str.length();
        for (int i = 0; i < l / 2; i++)
        {
            if (str[i] != str[l - i - 1])
            {
                cnt--;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
