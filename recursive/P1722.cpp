/**
 *
 * @File:   P1722.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-21
 *
 */
#include <iostream>
using namespace std;

int f[202][202] = {{0}};

int main(void)
{
    int n;

    cin >> n;

    f[1][1] = 1;

    for (int i = 2; i <= 2 * n; i++) {
        for (int j = (i + 1) / 2; j <= i; j++) {
            f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % 100;
        }
    }
    cout << f[2 * n][n] << endl;
    return 0;
}
