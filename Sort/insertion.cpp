#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline void insertion_sort(vector<T> &x) {
	for (int i = 1;i < static_cast<int>(x.size());++i) {
		int j = i - 1;
		while (j >= 0 and x[j] > x[j + 1]) {
			swap(x[j + 1], x[j]);
			--j;
		}
	}
	for (T& i : x) cout << i << '\n';
}

int main() {
	vector<int> x {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	insertion_sort(x);
	return 0;
}
