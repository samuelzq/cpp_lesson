/**
 * https://www.luogu.com.cn/problem/B2119
 *
 * @File:   B2119.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <cstring>

char str[50];

int main(void)
{
    int l;
    scanf("%s", str);

    l = strlen(str);

    if (str[l - 1] == 'r' && str[l - 2] == 'e')
        str[l - 2] = 0;
    else if (str[l - 1] == 'y' && str[l - 2] == 'l')
        str[l - 2] = 0;
    else if (str[l - 1] == 'g' && str[l - 2] == 'n' && str[l - 3] == 'i')
        str[l - 3] = 0;

    printf("%s\n", str);
    return 0;
}
