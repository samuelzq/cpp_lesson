/**
 *
 * @File:   P9036.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-31
 *
 */
#include <iostream>
using namespace std;

int main(void)
{
    int n;

    cin >> n;
    while (n--) {
        long long int t;
        cin >> t;
        if (t & 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
