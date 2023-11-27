/**
 * https://www.luogu.com.cn/problem/B2074
 *
 * @File:   b2074.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-16
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, r;

    scanf("%d %d", &a, &b);

    r = 1;
    for (int i = 0; i < b; i++)
    {
        r *= a;
        r %= 7;
    }

    if (r == 0)
        printf("Sunday\n");
    else if (r == 1)
        printf("Monday\n");
    else if (r == 2)
        printf("Tuesday\n");
    else if(r == 3)
        printf("Wednesday\n");
    else if (r == 4)
        printf("Thursday\n");
    else if (r == 5)
        printf("Friday\n");
    else
        printf("Saturday\n");

    return 0;
}
