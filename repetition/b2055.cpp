/**
 * https://www.luogu.com.cn/problem/B2055
 *
 * @File:   b2055.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    float out;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float t;
        scanf("%f", &t);
        out += t;
    }
    printf("%f\n", out / n);
    return 0;
}
