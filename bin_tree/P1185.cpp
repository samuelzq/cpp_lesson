/**
 * https://www.luogu.com.cn/problem/P1185
 *
 * @File:   P1185.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

char mm[2024][2024];   // 描述10层的二叉树，列数不会超过1535，行数小于列数
int bb[12][2048][2];   // 记录每个节点在输出图上的坐标
int cc[12] = {0};      // 记录每层生成的节点数
int row = 0, col = 0;
int m, n;

int get_width(int l)
{
	int w = 5;

	if (l == 0)
		return 1;

	if (l == 1)
		return 2;

	for (int i = 2; i < l; i++)
		w = 2 * w + 1;

	return w;
}

// 生成完整的二叉树，注意为保证bb数组中能够正确记录每个节点的坐标，必须先生成左子树
void dfs(int x, int y, int l)
{
	if (x < 0 || y < 0 || x >= row || y >= col)
		return;

	int c = cc[m - l];
	bb[m - l][c][0] = x;
	bb[m - l][c][1] = y;
	cc[m - l]++;
	mm[x][y] = 'o';
	int w = get_width(l  - 2);
	for (int i = 1; i <= w; i++) {
		mm[x + i][y - i] = '/';
		mm[x + i][y + i] = '\\';
	}

	// 顺序不能颠倒
	dfs(x + w + 1, y - w - 1, l - 1);
	dfs(x + w + 1, y + w + 1, l - 1);
}

void remove(int x, int y, bool up)
{
	if (x < 0 || y < 0 || x >= row || y >= col)
		return;

	char c = mm[x][y];

	if (c == ' ')
		return;

	// 如果从子结点遍历上来，需要终止
	if (up && c == 'o')
		return;

	mm[x][y] = ' ';

	if (c == '\\') {
		remove(x - 1, y - 1, true);
		remove(x + 1, y + 1, false);
	} else if (c == '/') {
		remove(x - 1, y + 1, true);
		remove(x + 1, y - 1, false);
	} else {
		remove(x - 1, y - 1, true);
		remove(x + 1, y + 1, false);
		remove(x - 1, y + 1, true);
		remove(x + 1, y - 1, false);
	}
}

int main(void)
{

	cin >> m >> n;

	col = 5;
	row = 3;
	for (int i = 2; i < m; i++) {
		row += col / 2 + 1;
		col = col * 2 + 1;
	}

//	cout << row << ' ' << col << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			mm[i][j] = ' ';
	}

	dfs(0, col / 2, m);

#if 0
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < cc[i]; j++) {
			cout << i << ':' << j << '-' << bb[i][j][0] << ':' << bb[i][j][1] << endl;
		}
	}
#endif

	for (int i = 0; i < n; i++) {
		int xx, yy, x, y;
		cin >> xx >> yy;

		xx--;
		yy--;
		x = bb[xx][yy][0];
		y = bb[xx][yy][1];
		mm[x][y] = ' ';
		remove(x - 1, y - 1, true);
		remove(x + 1, y + 1, false);
		remove(x - 1, y + 1, true);
		remove(x + 1, y - 1, false);
	}

	for (int i = 0; i < row; i++)
		cout << mm[i] << endl;

	return 0;
}
