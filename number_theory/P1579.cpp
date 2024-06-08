/**
 * https://www.luogu.com.cn/problem/P1579
 *
 * @File:   P1579.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-02
 *
 */
#include <iostream>
using namespace std;

#define N 20004
bool isPrime[N];

void init(int n)
{
    for (int i = 0; i <= n; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

int main(void)
{
    int n;

    cin >> n;
    init(n);

    for (int i = 2; i <= n - 4; i++) {
        for (int j = 2; j <= n - 2 - i; j++) {
            if (isPrime[i] && isPrime[j] && isPrime[n - i - j]) {
                cout << i << ' ' << j << ' ' << n - i - j << endl;
                return 0;
            }
        }
    }
}
