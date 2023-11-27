/**
 * https://www.luogu.com.cn/problem/B2054
 *
 * @File:   b2054.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-16
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    float sum;

    scanf("%d", &n);

    sum = 0;
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        sum += t;
    }
    printf("%.02lf\n", (double)sum / n);
    return 0;
}
