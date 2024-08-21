/**
 * https://www.luogu.com.cn/problem/P1281
 *
 * @File:   P1281.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-22
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int m, k;
int b[505];
int o[505][2];

int check(int t)
{
	int c, s;

	if (t < b[m])   // 注意： 当前这个值太小,需要调整左边界
		return k + 1;
	c = 1;
	s = 0;
	for (int i = m; i > 0; i--) {
		if (s + b[i] <= t) {
			s += b[i];
		} else {
			s = b[i];
			c++;
		}
	}

	//printf("%d\n", c);
	return c;
}

int main(void)
{
	int l, r, mid;
	scanf("%d %d", &m, &k);
	l = r = 0;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &b[i]);
		r += b[i];
	}

	while (l < r) {  // 寻在左边界，一个最小的抄书数间
		int c;
		mid = l + (r - l) / 2;
		c = check(mid);
		if (c <= k)
			r = mid;
		else
			l = mid + 1;
	}

	//printf("Lenth=%d\n", l);

	int i, s, e, d, p; // 一个堆栈，s：起始书号；e：结束的书号
	i = s = e = m;
	p = k;
	d = 0;
	while (i > 0) {  // 由于前面的人尽可能少抄写，因此到着安排
		if (d + b[i] <= l) {
			d += b[i];
			s = i;   // 不断更新起始书号
		} else {
			o[p][0] = s; // 当前抄手不能再多抄了，更新他的记录
			o[p][1] = e;
			d = b[i];   // 下一个抄手的记录
			e = s = i;
			p--;
		}
		i--;
	}
	// 注意：更新第一个抄手的记录
	o[p][0] = s;
	o[p][1] = e;

	// 顺序输出所有抄手的记录
	for (int i = 1; i <= k; i++)
		printf("%d %d\n", o[i][0], o[i][1]);
	return 0;
}
