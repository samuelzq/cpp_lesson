/**
 * https://www.luogu.com.cn/problem/CF49A
 *
 * @File:   CF49A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int l;
    char c;
    string str;

    getline(cin, str);

    l = str.length() - 1;
    while (l >= 0)
    {
        if (str[l] != '?' && str[l] != ' ')
            break;
        l--;
    }

    c = tolower(str[l]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}
