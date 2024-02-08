/**
 * https://www.luogu.com.cn/problem/AT_arc003_2
 *
 * @File:   AT_arc003_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    string str;
    vector<string> strs;

    cin >> n;
    while (n--)
    {
        cin >> str;
        strs.push_back(str);
    }

    for (string &s : strs)
        reverse(s.begin(), s.end());

    sort(strs.begin(), strs.end());

    for (string &s : strs)
        reverse(s.begin(), s.end());
    for (string s : strs)
        cout << s << endl;
    return 0;
}
