/**
 * https://www.luogu.com.cn/problem/AT_ddcc2017_qual_a
 *
 * @File:   AT_ddcc2017_qual_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>

int main(void)
{
    char str[5];

    scanf("%s", str);

    if (str[0] == str[1] && str[2] == str[3] && str[1] != str[2])
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
