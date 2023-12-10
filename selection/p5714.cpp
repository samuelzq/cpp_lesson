/**
 * https://www.luogu.com.cn/problem/P5714
 *
 * @File:   p5714.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    float m, h, bmi;

    scanf("%f %f", &m, &h);
    bmi = m / h / h;

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24)
        printf("Normal\n");
    else
 //       cout << bmi << "\nOverweight" << endl;
       printf("%g\nOverweight\n", bmi);
    return 0;
}
