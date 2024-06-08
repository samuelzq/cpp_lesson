/**
 * https://www.luogu.com.cn/problem/P1218
 *
 * @File:   P1218.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-02
 *
 */
#include <iostream>
using namespace std;
int a[] = {2, 3, 5, 7};
int d;

bool isPrime(int n)
{
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return n >= 2;
}

void dfs(int p, int n)
{
    if (n == d) {
        cout << p << endl;
        return;
    }

    for (int i = 1; i <= 9; i += 2) {
        if (!isPrime(p * 10 + i))
            continue;
        dfs(p * 10 + i, n + 1);
    }
}


int main(void)
{
    cin >> d;

    for (int i = 0; i < 4; i++) {
        dfs(a[i], 1);
    }

    return 0;
}
