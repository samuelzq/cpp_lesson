/**
 * https://www.luogu.com.cn/problem/CF1759A
 *
 * @File:   CF1759A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-19
 *
 */
#include <iostream>

using namespace std;

string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

int main(void)
{
    int t;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> str;

        if (yes.find(str) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    cout << endl;
    return 0;
}
