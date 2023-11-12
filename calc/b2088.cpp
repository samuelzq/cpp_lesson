/**
 * https://www.luogu.com.cn/problem/B2088
 *
 * @File:   b2088.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-06
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a;
    float c[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    float out = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        out += a * c[i];
    }

    printf("%.1f\n", out);
    return 0;
}
