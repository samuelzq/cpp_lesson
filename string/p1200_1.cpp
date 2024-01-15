/**
 *
 * @File:   p1200_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-13
 *
 */
#include <cstring>
#include <cstdio>

char str1[1000], str2[1000];
int main(void)
{
    int a, b;

    scanf("%s %s", str1, str2);

    a = b = 1;
    for (int i = 0; i < strlen(str1); i++)
        a = a * (str1[i] - 'A' + 1) % 47;

    for (int i = 0; i < strlen(str2); i++)
        b = b * (str2[i] - 'A' + 1) % 47;

    if (a == b)
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}
