/**
 * https://www.luogu.com.cn/problem/P1827
 *
 * @File:   P1827.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-04
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N 27

char in[N], pre[N], post[N];  // 分别记录中序、前序、后序遍历的结果
int n, idx = 0;

void getpost(int instart, int inend, int prestart, int preend)
{
	for (int i = instart; i <= inend; i++) {
		if (pre[prestart] == in[i]) {  // 找到跟结点在中序遍历中的位置， 将中序遍历的结果分为左右两个部分
			getpost(instart, i - 1, prestart + 1, prestart + i - instart);  // 输出左子树，注意如何将前序遍历的结果分割成左右两个部分
			getpost(i + 1, inend, prestart + i - instart + 1, preend);      // 输出右zishu
			//printf("idx%d, i%d %c\n", idx, i, in[i]);
			post[idx++] = in[i];     // 输出当前结点
			return;
		}
	}
}

int main(void)
{
	scanf("%s %s", in, pre);
	n = strlen(in);
	getpost(0, n - 1, 0, n - 1);
	printf("%s\n", post);
	return 0;
}
