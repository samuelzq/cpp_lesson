/**
 * https://www.luogu.com.cn/problem/P1229
 *
 * @File:   P1229.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-05
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string pre, post;
	int cnt = 0;

	cin >> pre >> post;

	for (int i = 0; i < pre.length(); i++) {
		for (int j = 1; j < post.length(); j++) {
			// pre[i], post[j]是父结点，如果当前结点有两个子结点，pre[i+1]、post[j-1]分别对应左右两个不同的结点
			if (pre[i] == post[j] && pre[i + 1] == post[j - 1])  // 当前结点只有一个结点
				cnt++;
		}
	}

	cout << (1 << cnt) << endl;
	return 0;
}
