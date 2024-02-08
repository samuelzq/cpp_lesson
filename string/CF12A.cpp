/**
 * https://www.luogu.com.cn/problem/CF12A
 *
 * @File:   CF12A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>

using namespace std;

char m[4][4] = {0};

int main(void)
{
    for (int i = 0; i < 3; i++)
        cin >> m[i];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] != m[3 - 1 -i][3 - 1 - j])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
