/**
 * https://www.luogu.com.cn/problem/B3738
 *
 * @File:   B3738.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-31
 *
 */
#include <iostream>
using namespace std;

#define N   12000
int prime[N] = {0};
int p[500];
int o[21][21];

void init(int n)
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j < N; j += i)
                prime[j] = 1;
        }
    }

    for (int k = 0, i = 2; k < n * n;) {
        if (!prime[i])
            p[k++] = i;
        i++;
    }
}

int main(void)
{
    int n, x, y, k;

    cin >> n >> x >> y;
    init(n);

    k = 0;
    o[0][0] = 2;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n - 1 - i; j++)
            o[i][j] = p[k++];
        for (int j = i; j < n - 1 - i; j++)
            o[j][n - 1 - i] = p[k++];
        for (int j = i; j < n - 1 - i; j++)
            o[n - 1 - i][n - 1 - j] = p[k++];
        for (int j = i; j < n - 1 - i; j++)
            o[n - 1 - j][i] = p[k++];
    }
#if 0
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
            cout << o[i][j] << ' ';
        cout << endl;
    }
#endif
    cout << o[x - 1][y - 1] << endl;
    return 0;
}
