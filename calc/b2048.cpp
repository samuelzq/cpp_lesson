/**
 * https://www.luogu.com.cn/problem/B2048
 *
 * @File:   b2048.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-06
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int x, out;
    char c;

    scanf("%d %c", &x, &c);

    out = 8;
    if (x > 1000) {
        out += (x - 1000 + 499) / 500 * 4;
    }

    if (c == 'y')
        out += 5;

    printf("%d\n", out);
    return 0;
}
