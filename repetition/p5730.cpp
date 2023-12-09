/**
 * https://www.luogu.com.cn/problem/P5730
 *
 * @File:   p5730.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-29
 *
 */
#include <iostream>

char s[10][5][4] = {
	{"XXX", "X.X", "X.X", "X.X", "XXX"},
	{"..X", "..X", "..X", "..X", "..X"},
	{"XXX", "..X", "XXX", "X..", "XXX"},
	{"XXX", "..X", "XXX", "..X", "XXX"},
	{"X.X", "X.X", "XXX", "..X", "..X"},
	{"XXX", "X..", "XXX", "..X", "XXX"},
	{"XXX", "X..", "XXX", "X.X", "XXX"},
	{"XXX", "..X", "..X", "..X", "..X"},
	{"XXX", "X.X", "XXX", "X.X", "XXX"},
	{"XXX", "X.X", "XXX", "..X", "XXX"},
};

int a[103];

int main(void)
{
    int n;
    char c;

    scanf("%d", &n);
    scanf("%c", &c);

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c);
        a[i] = c - '0';
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            printf("%s.", s[a[j]][i]);
        }
        printf("%s\r\n", s[a[n - 1]][i]);
    }
    return 0;
}
