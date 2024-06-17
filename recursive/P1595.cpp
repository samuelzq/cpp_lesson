/**
 * https://www.luogu.com.cn/problem/P1595
 *
 * @File:   P1595.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <iostream>
using namespace std;

#define ULL unsigned long long

ULL w(ULL n)
{
    if (n <= 1)
        return 0;

    if (n == 2)
        return 1;

    return (n - 1) * (w(n - 1) + w(n - 2));
}
int main(void)
{
    unsigned long long int n;

    cin >> n;
    cout << w(n) << endl;
    return 0;
}
