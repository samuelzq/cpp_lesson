/**
 * https://www.luogu.com.cn/problem/B2039
 *
 * @File:   b2039.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    long long int x, y;

    scanf("%lld %lld", &x, &y);

    if (x > y)
        printf(">\n");
    else if (x == y)
        printf("=\n");
    else
        printf("<\n");

    return 0;
}
