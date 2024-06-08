/**
 * https://www.luogu.com.cn/problem/P8054
 *
 * @File:   P8054.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-02
 *
 */
#include <iostream>
using namespace std;

int main(void)
{
    int t;

    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        while ((n & 1) == 0)
            n >>= 1;

        // 每一个大于3的质数都比2的平方大
        if (n == 1 || n == 3)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
