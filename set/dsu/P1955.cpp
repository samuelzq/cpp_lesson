/**
 * https://www.luogu.com.cn/problem/P1955
 *
 * @File:   P1955.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

// 记录每一组输入的条件
struct node {
	int i, j, e;

	node () {i = j = e = 0;}

	node (int _i, int _j, int _e) {
		i = _i;
		j = _j;
		e = _e;
	}
} ops[100020];

int cnt;
int nums[200020];  // 将输入数据离散化处理,并查集中记录的是每个数的位置
int uf[200010];

// 离散化之后查询某个数在表中的位置
int binary_search(int x)
{
	int l, r;
	l = 0;
	r = cnt;

	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (nums[mid] < x)
			l = mid + 1;
		else if (nums[mid] > x)
			r = mid - 1;
		else
			return mid;
	}
	return -1;
}

bool cmp(node &n1, node &n2)
{
	return n1.e > n2.e;
}

int find(int x)
{
	return (x == uf[x]) ? x : uf[x] = find(uf[x]);
}

void merge(int x, int y)
{
	int px, py;

	px = find(x);
	py = find(y);

	if (px != py)
		uf[py] = px;

	return;
}

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &ops[i].i, &ops[i].j, &ops[i].e);
			nums[i * 2] = ops[i].i;
			nums[i * 2 + 1] = ops[i].j;
		}

		sort(nums, nums + 2 * n);

		cnt = 0;
		for (int i = 1; i < 2 * n; i++) {
			if (nums[i] != nums[cnt]) {
				cnt++;
				nums[cnt] = nums[i];
			}
		}

		for (int i = 0; i <= cnt; i++)
			uf[i] = i;

		// 本题不同与敌友分组，不存在敌人的敌人是朋友或者朋友的敌人是敌人这种关系
		// 因此首先处理相等的关系。把相等的操作数放置在同一组
		// 然后再判读不想等的条件是否能成立
		sort(ops, ops + n, cmp);
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (ops[i].e == 1) {
				int ii, ij;
				ii = binary_search(ops[i].i);
				ij = binary_search(ops[i].j);
				merge(ii, ij);
			} else {
				int ii, ij;
				ii = binary_search(ops[i].i);
				ij = binary_search(ops[i].j);
				int pi, pj;
				pi = find(ii);
				pj = find(ij);
				if (pi == pj) { // 有一组不想等条件不能够成立，不需要再判断了
					flag = true;
					break;
				}
			}
		}
		if (flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
