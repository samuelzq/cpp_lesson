/**
 * https://www.luogu.com.cn/problem/B2043
 *
 * @File:   b2043.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int x;

    scanf("%d", &x);

    if (x % (3 * 5 * 7) == 0) {
        printf("3 5 7");
    } else if (x % (3 * 5) == 0) {
        printf("3 5");
    } else if (x % (5 * 7) == 0) {
        printf("5 7");
    } else if (x % (3 * 7) == 0) {
        printf("3 7");
    } else if (x % 3 == 0) {
        printf("3");
    } else if (x % 5 == 0) {
        printf("5");
    } else if (x % 7 == 0) {
        printf("7");
    } else {
        printf("n");
    }
    printf("\n");
    return 0;
}
