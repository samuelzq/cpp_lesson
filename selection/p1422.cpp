/**
 * https://www.luogu.com.cn/problem/P1422
 *
 * @File:   p1422.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    double c;

    scanf("%d", &n);

    if (n < 151)
    {
        c = n * 0.4463;
    }
    else if ( n > 150 && n < 401)
    {
        c = 150 * 0.4463 + (n - 150) * 0.4663;
    }
    else{
        c = 150 * 0.4464 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.1lf\n", c);
    return 0;
}
