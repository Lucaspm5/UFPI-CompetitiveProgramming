#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline bool _binary_search_iterative(T x, int l, int r, vector<T> &arr) {
	while (r - l > 0) {
		int m = l + (r - l) / 2;
		if (arr[m] == x) return true;
		(arr[m] > x) ? r = m - 1 : l = m + 1;
	}
	return arr[l] == x;
}

template <typename T>
inline bool _binary_search_recursive(T x, int l, int r, vector<T> &arr) {
	if (r - l > 0) {
		int m = l + (r - l) / 2, left = 0, right = 0;
		if (arr[m] == x) return true;

		if (arr[m] > x)
			left = l, right = m - 1;
		else 
			left = m + 1, right = r;
		
		return _binary_search_recursive(x, left, right, arr);
	}
	return arr[l] == x;
}

int main() {
	//vector<int> x {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//vector<char> x {'a', 'b', 'c', 'd', 'e'};
	vector<int> x {1, 61, 126, 217, 2876, 6127, 39162, 98126, 712687, 1000000000};
	int q = 10;
	while (q--) {
		int K; cin >> K;
		cout << _binary_search_iterative(K, 0, static_cast<int>(x.size() - 1), x) << '\n';
		cout << _binary_search_recursive(K, 0, static_cast<int>(x.size() - 1), x) << '\n';
		cout << '\n';
	}
	return 0;
}
