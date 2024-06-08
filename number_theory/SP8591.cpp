/**
 * https://vjudge.net/problem/SPOJ-PRIMPERM
 *
 * @File:   SP8591.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-07
 *
 */
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define db double
#define M 10000010

#define For(i, j, k) for (int i = j; i <= k; i++)
#define Rep(i, j, k) for (int i = j; i >= k; i--)
#define mem(a, b) memset(a, b, sizeof a)
#define INF 0x3f3f3f3f
#define LNF 0x3f3f3f3f3f3f3f3f
#define endl '\n'
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0))

int num;
int a[10];

bool is_pri[M];
int prime[M];
int cnt;

void euler(int n)//欧拉筛
{
    memset(is_pri, true, sizeof(is_pri));
    is_pri[1] = false; 
    for(int i = 2; i <= n; ++i)
    {
        if(is_pri[i]) prime[++cnt] = i;
        for(int j = 1; j <= cnt && i * prime[j] <= n; ++j)
        {
            is_pri[i * prime[j]] = false;
            if(i % prime[j] == 0) break;
        }
    }
}

signed main(){
    IOS;
    euler(M - 10);//预处理1e7
    int t;
    cin >> t;
    while(t --){
        cin >> num;
        int w = 0,ans = 0;
        while(num) a[++w] = num % 10,num /= 10;
        sort(a + 1,a + 1 + w);//注意得从最小的排列开始，不然枚举不完
        do{
            int p = 0;
            Rep(i,w,1){
                p = p * 10 + a[i];
            }
            if(is_pri[p] && (int)log10(p) + 1 == w) ans ++;
        } while(next_permutation(a + 1,a + 1 + w));//当没有下一个排列是，函数返回false，否则ture
        cout << ans << endl;
    }
    return 0;
}
