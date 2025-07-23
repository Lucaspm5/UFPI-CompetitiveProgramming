#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using uint = unsigned int;

template<typename T>
struct BinaryTree {
	// indice (valor, altura) do nó respectivo
	unordered_map<uint, pair<T, uint>> tree;

	void insertion(T x) {
		uint p = 1;
		while (tree.count(p)) {
			int partial = p;
			partial <<= 1;
			if (tree[p].first <= x) partial++;
			p = partial;
		}
		tree[p].first = x;
		tree[p].second = tree[p >> 1].second + 1;
	}
	
	void path() {
		queue<pair<uint, pair<T, uint>>> q;
		uint p = 1, curr_height = 0;
		q.push({p, {tree[p].first, tree[p].second}});
		while (!q.empty()) {
			pair<uint, pair<T, uint>> x = q.front();
			q.pop();
			
			curr_height = x.second.second;
			
			cout << x.second.first;
			
			if (!q.empty() and q.front().second.second == curr_height) cout << ' ';
			else cout << '\n';
			
			uint left = x.first * 2;
			uint right = left + 1;
			
			if (tree.count(left))
				q.push({left, {tree[left].first, tree[left].second}});
			if (tree.count(right))
				q.push({right, {tree[right].first, tree[right].second}});
		}
	}
};

int main() { _
	int n, x; cin >> n >> x;
	BinaryTree<int> bt;
	bt.tree[1] = {x, 0};
	for (int i = 0;i < n - 1;++i) {
		cin >> x;
		bt.insertion(x);
	}
	bt.path();
	return 0;
}
