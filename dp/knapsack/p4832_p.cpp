#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, sumc, sums;

	cin >> n;

	sumc = sums = 0;
	while (n--) {
		string str;
		cin >> str;
		for (char c : str) {
			if (c == 's')
				sums++;
			if (c == 'c')
				sumc++;
		}
	}

	cout << ((sums > sumc) ? sumc : sums) << endl;
	return 0;
}
