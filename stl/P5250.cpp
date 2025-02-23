/**
 * https://www.luogu.com.cn/problem/P5250
 *
 * @File:   P5250.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

set<int> w;

int main(void)
{
	int n;

	cin >> n;
	while (n--) {
		int o, i;
		cin >> o >> i;
		if (o == 1) {
			auto s = w.find(i);
			if (s == w.end())
				w.insert(i);
			else
				cout << "Already Exist\n";
		} else if (o == 2) {
			if (w.empty())
				cout << "Empty\n";
			else {
				auto l = w.lower_bound(i);

				if (*l == i || l == w.begin()) {  // 有长度相等的木材、仅剩余一根木材
					cout << *l << '\n';
					w.erase(l);
				} else if (l == w.end()) { // 所有木材都小于当前木材
					l--;
					cout << *l << '\n';
					w.erase(l);
				} else {  // l指向的木材大于需求，和它前一根木材做对比
					auto r = l;
					l--;
					if ((i - *l) <= (*r - i)) {
						cout << *l << '\n';
						w.erase(l);
					} else {
						cout << *r << '\n';
						w.erase(r);
					}
				}
			}
		}
#if 0
	for (std::set<int>::iterator it=w.begin(); it!=w.end(); ++it)
		std::cout << ' ' << *it;

	std::cout << '\n';	
#endif
	}
	return 0;
}
