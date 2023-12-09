/**
 * https://www.luogu.com.cn/problem/P1055
 *
 * @File:   p1055.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

char isbn[14];

int main(void)
{
    int check, n;
    char c;
    scanf("%s", isbn);

    check = 0;
    n = 1;
    for (int i = 0; i < 11; i++)
    {
        if (isbn[i] == '-')
            continue;
        check += (isbn[i] - '0') * n++;
    }
    check %= 11;
    if (check == 10)
        c = 'X';
    else
        c = '0' + check;

    if (c == isbn[12])
        printf("Right\n");
    else
    {
        isbn[12] = c;
        printf("%s\n", isbn);
    }
    return 0;
}
