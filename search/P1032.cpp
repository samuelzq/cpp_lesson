/**
 * https://www.luogu.com.cn/problem/P1032
 *
 * @File:   P1032.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-28
 *
 */
#include <bits/stdc++.h>

using namespace std;

// ed，st用于剪枝
map <string,bool> ed;
map <string,int> st;
string a, b;
string change[30][3];
int t = 1, k = 2;
int ans = 999999;

void dfs(string now, int step)
{
//	cout<<now<<' '<<step<<endl;
	if (step > k)
		return; //步数过大

	if (now == b) { // 更新最小步数
		ans = min(ans, step);
		return;
	}

	if (ed[now]) { // 此处剪枝
		if (step >= st[now]) // 当前字符串可以使用更少的步数得到
			return;
	}

	// 记录当前字符串的变换次数
	ed[now] = 1;
	st[now] = step;

	int loc = 0;
	string changed;
	for (int i = 1; i <= t; ++i) { //找所有的字符串
		loc = -1;
		while (1) { //找到了
			loc = now.find(change[i][0], loc + 1);
			if (loc == -1)
				break;
			changed = now;
			changed.erase(loc, change[i][0].size());
			changed.insert(loc, change[i][1]);
			dfs(changed, step + 1);
		}
	}
	return;
}

int main()
{
	cin >> a >> b;
	while (cin >> change[t][0] >> change[t][1]) {
		t++;
	}
	t--;

	while (ans == 999999) {
		dfs(a, 0);
		ed.clear();
		st.clear();
		k++;
		if (k == 11) // 递增替换的最大次数
			break;
	}

	if (ans == 999999)
		cout << "NO ANSWER!" << endl;
	else
		cout << ans << endl;
	return 0;
}
