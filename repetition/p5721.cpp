/**
 * https://www.luogu.com.cn/problem/P5721
 *
 * @File:   p5721.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, o;

    scanf("%d", &n);

    o = 1;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n - i; j++)
            printf("%02d", o++);
        printf("\n");
    }
    return 0;
}
