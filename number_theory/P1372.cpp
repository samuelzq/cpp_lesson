/**
 * https://www.luogu.com.cn/problem/P1372
 *
 * 这k个数其实就是：x*1,x*2......x*k
 *
 * @File:   P1372.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-11
 *
 */
#include <iostream>
using namespace std;

int main(void)
{
    int n, k;

    cin >> n >> k;
    cout << n / k << endl;
    return 0;
}
