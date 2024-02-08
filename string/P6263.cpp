/**
 * https://www.luogu.com.cn/problem/P6263
 *
 * @File:   P6263.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int cnt[8];

int main(void)
{
    string str;

    getline(cin, str);

    for (char c : str)
    {
        switch (c)
        {
            case '`':
            case '1':
            case 'Q':
            case 'A':
            case 'Z':
                cnt[0]++;
                break;
            case '2':
            case 'W':
            case 'S':
            case 'X':
                cnt[1]++;
                break;
            case '3':
            case 'E':
            case 'D':
            case 'C':
                cnt[2]++;
                break;
            case '4':
            case '5':
            case 'R':
            case 'T':
            case 'F':
            case 'G':
            case 'V':
            case 'B':
                cnt[3]++;
                break;
            case '6':
            case '7':
            case 'Y':
            case 'U':
            case 'H':
            case 'J':
            case 'N':
            case 'M':
                cnt[4]++;
                break;
            case '8':
            case 'I':
            case 'K':
            case ',':
                cnt[5]++;
                break;
            case '9':
            case 'O':
            case 'L':
            case '.':
                cnt[6]++;
                break;
            case '0':
            case 'P':
            case ';':
            case '/':
            case '\'':
            case '[':
            case ']':
            case '=':
            case '-':
                cnt[7]++;
                break;
        }
    }
    for (int i : cnt)
        cout << i << endl;
    return 0;
}
