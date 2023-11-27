/**
 * https://www.luogu.com.cn/problem/B2069
 *
 * @File:   b2069.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    double q1, q2, p1, p2, q, p, out;
    int n;

    q1 = 2;
    p1 = 1;

    out = q1 / p1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        q2 = q1 + p1;
        p2 = q1;
        out += q2 / p2;
        q1 = q2;
        p1 = p2;
    }
    printf("%.04lf\n", out);
    return 0;
}
