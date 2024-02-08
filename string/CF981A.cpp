/**
 * https://www.luogu.com.cn/problem/CF981A
 *
 * @File:   CF981A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;


bool is_p(string &str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
            return false;
    }
    return true;
}

int main(void)
{
    string str, substr;
    int ml;

    cin >> str;

    ml = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int l = 2; l + i <= str.length(); l++)
        {
            substr.clear();
            for (int j = 0; j < l; j++)
                substr += str[j + i];
            if (!is_p(substr))
                ml = (ml < l) ? l : ml;
        }
    }
    cout << ml << endl;
    return 0;
}
