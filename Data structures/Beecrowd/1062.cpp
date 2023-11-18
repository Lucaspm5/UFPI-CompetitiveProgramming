#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

void solve() {
    int n;
    while (cin >> n and n) {
        int v[n];
        while (cin >> v[0] and v[0]) {
            for (int i = 1;i < n;++i) cin >> v[i];
            stack<int> pilha;
            int valid {1}, vg {1};
            for (int i = 0;i < n and valid;++i) {
                while (vg <= v[i]) pilha.push(vg++);
                if (pilha.top() == v[i]) pilha.pop();
                else valid = 0;
            }
            cout << ((valid) ? "Yes" : "No") << '\n';
        }
        cout << '\n';
    }
}

int main() { no_tle_pls
    solve();
    return 0;
}








