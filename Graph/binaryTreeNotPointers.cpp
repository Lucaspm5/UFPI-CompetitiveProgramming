#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// indice (valor, altura) do nó respectivo
unordered_map<int, pair<int, int>> tree;

void insertion(int x) {
	int p = 1;
	while (tree.count(p)) {
		int partial = p;
		partial *= 2;
		if (tree[p].first <= x) partial++;
		p = partial;
	}
	tree[p].first = x;
	tree[p].second = tree[p / 2].second + 1;
}

void path() {
	queue<pair<int, pair<int, int>>> q;
	int p = 1, curr_height = 0;
	q.push({p, {tree[p].first, tree[p].second}});
	while (!q.empty()) {
		pair<int, pair<int, int>> x = q.front();
		q.pop();
		
		curr_height = x.second.second;
		
		cout << x.second.first;
		
		if (!q.empty() and q.front().second.second == curr_height) cout << ' ';
		else cout << '\n';
		
		int left = x.first * 2;
		int right = left + 1;
		
		if (tree.count(left))
			q.push({left, {tree[left].first, tree[left].second}});
		if (tree.count(right))
			q.push({right, {tree[right].first, tree[right].second}});
	}
}

int main() { _
	int n, x; cin >> n >> x;
	tree[1].first = x;
	tree[1].second = 0;
	for (int i = 0;i < n - 1;++i) {
		cin >> x;
		insertion(x);
	}
	path();
	return 0;
}
