/**
 * https://www.luogu.com.cn/problem/B2044
 *
 * @File:   b2044.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a < 60 && b >= 60 && c >= 60) ||
        (a >= 60 && b < 60 && c >= 60) ||
        (a >= 60 && b >= 60 && c < 60)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
