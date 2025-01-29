#include <bits/stdc++.h>
using namespace std;


template <typename T>
inline vector<T> selection_sort(vector<T> &x) {
	size_t n = static_cast<int>(x.size());
	for (size_t i = 0;i < n - 1;++i) {
		size_t min_index = i;
		for (size_t j = i + 1;j < n;++j) {
			if (x[j] < x[min_index]) min_index = j;
		}
		swap(x[i], x[min_index]);
	}
	return x;
}

template <typename T>
inline void get_info(vector<T> &x) {
	for (T& i : x) cout << i << '\n';
	cout << '\n';
}

int main() {
	vector<int> a {3, 6, 9, -8, 1, 10, 2, -10, 7};
	vector<char> b {'b', 'a', 'a', 'b'};
	vector<string> c {"lucas", "emanuel", "pereira", "aaaaa", "bbbb"};

	auto _a = selection_sort(a);
	auto _b = selection_sort(b);
	auto _c = selection_sort(c);

	get_info(_a);
	get_info(_b);
	get_info(_c);

	return 0;
}
