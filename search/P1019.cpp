/**
 *
 * @File:   P1019.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

string str[24];
int n, com[24][24] = {{0}}, cnt = 0;
int a[24] = {0};
int b[48] = {0};

void g_com(int a, int b)
{
    int l = str[a].size();
    com[a][b] = 0;
    for (int i = 1; i <= l && i < str[b].size(); i++) {
        int j = 0;
        for (; j < i; j++) {
            if (str[a][l - i + j] != str[b][j])
                break;
        }
        if (j == i && i != l) {
            com[a][b] = j;
            break;
        }
    }
}

void dfs(int i, int c, int len)
{
    bool conti = false;

    for (int j = 0; j < n; j++) {
        if (!a[j] || com[i][j] <= 0)
            continue;
        b[c] = j;
        conti = true;
        a[j]--;
        dfs(j, c + 1, len + str[j].size() - com[i][j]);
        a[j]++;
    }

    for (int i = 0; i < c; i++)
        cout << b[i] << ' ';
    cout << "----" << len << endl;
    if(conti == false)
        cnt = max(cnt, len);
}

int main(void)
{
    char sc;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
        for (int j = 0; j <= i; j++) {
            g_com(i, j);
            g_com(j, i);
        }
        a[i] = 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << com[i][j] << ' ';
        cout << endl;
    }

    cin >> sc;
    for (int i = 0; i < n; i++) {
        if (sc == str[i][0]) {
            b[0] = i;
            a[i]--;
            dfs(i, 1, str[i].size());
            a[i]++;
        }
    }
    cout << cnt << endl;
    return 0;
}
