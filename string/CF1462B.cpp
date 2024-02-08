/**
 * https://www.luogu.com.cn/problem/CF1462B
 *
 * @File:   CF1462B.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-27
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    while (n--)
    {
        string str;
        int l;

        cin >> l >> str;


       if (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[3] == '0')
           cout << "YES";
       else if (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[l - 1] == '0')
           cout << "YES";
       else if (str[0] == '2' && str[1] == '0' && str[l - 2] == '2' && str[l - 1] == '0')
           cout << "YES";
       else if (str[0] == '2' && str[l - 3] == '0' && str[l - 2] == '2' && str[l - 1] == '0')
           cout << "YES";
       else if (str[l- 4] == '2' && str[l - 3] == '0' && str[l - 2] == '2' && str[l - 1] == '0')
           cout << "YES";
       else
           cout << "NO";
        cout << endl;
    }
    return 0;
}
