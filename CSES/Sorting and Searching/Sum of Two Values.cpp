#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { _ 
    int n, x; cin >> n >> x;
    map<int, int> memo;
    for (int i = 0;i < n;++i) { 
        int v; cin >> v; 
        if (memo.count(x - v)) {
            cout << i + 1 << " " << memo[x - v] << '\n';
            return 0;
        }
        memo[v] = i + 1; 
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0;
}

