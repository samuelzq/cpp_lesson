/**
 * https://www.luogu.com.cn/problem/B2052
 *
 * @File:   b2052.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-06
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, out;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    switch (c) {
        case '+':
            out = a + b;
            break;
        case '-':
            out = a - b;
            break;
        case '*':
            out = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Divided by zero!\n");
                return 0;
            }
            out = a / b;
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
    printf("%d\n", out);
    return 0;
}

