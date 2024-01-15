/**
 * https://www.luogu.com.cn/problem/AT_abc069_b
 *
 * @File:   AT_abc069_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-15
 *
 */
#include <cstdio>
#include <cstring>

char str[128];

int main(void)
{
    scanf("%s", str);
    printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
    return 0;
}
