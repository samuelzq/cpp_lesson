/**
 * https://www.luogu.com.cn/problem/B2112
 *
 * @File:   b2112.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    string str1, str2;

    cin >> n;
    while (n--)
    {
        cin >> str1 >> str2;

        if (str1 == str2) {
            cout << "Tie" << endl;
        } else if ((str1 == "Rock" && str2 == "Scissors") ||
                   (str1 == "Scissors" && str2 == "Paper") ||
                   (str1 == "Paper" && str2 == "Rock")) {
            cout << "Player1" << endl;
        } else {
            cout << "Player2" << endl;
        }
    }
    return 0;
}
