/**
 * https://www.luogu.com.cn/problem/B3792
 *
 * @File:   b3792.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-06
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d\n", a - b, a + c);
    return 0;
}
