/**
 * https://www.luogu.com.cn/problem/P1151
 *
 * @File:   p1151.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int k, s1, s2, s3, s;
    bool f = false;

    scanf("%d", &k);
    for (int i = 10000; i <= 30000; i++) {
        s1 = i / 100;
        s2 = i / 10 % 1000;
        s3 = i % 1000;

        if (s1 % k == 0 && s2 % k == 0 && s3 % k == 0)
        {
            printf("%d\n", i);
            f = true;
        }
    }

    if (f == false)
        printf("No\n");

    return 0;
}
