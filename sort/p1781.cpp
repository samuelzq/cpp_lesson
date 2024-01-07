/**
 * https://www.luogu.com.cn/problem/P1093
 *
 * @File:   p1781.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>

using namespace std;

string can[22];

int main(void)
{
    int n, idx, l;

    cin >> n;
    idx = 0;
    l = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> can[i];
        if (l < can[i].length())
        {
            l = can[i].length();
            idx = i;
        }
        else if (l == can[i].length())
        {
            int j;
            for (j = 0; j < l; j++)
            {
                if (can[i][j] != can[idx][j])
                    break;
            }
            if (j < l && can[i][j] > can[idx][j])
                idx = i;
        }
    }
    cout << idx << '\n' << can[idx] << endl;
    return 0;
}
