/**
 * https://www.luogu.com.cn/problem/B2082
 *
 * @File:   b2082.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int l, r, c;

    scanf("%d %d", &l, &r);

    c = 0;
    for (int i = l; i <= r; i++)
    {
        int t = i;
        while (t)
        {
            if (t % 10 == 2)
                c++;
            t /= 10;
        }
    }
    printf("%d\n", c);
    return 0;
}
