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
    int t; cin >> t;
    while (t--) {
        int n, c, ans {}; cin >> n >> c;
        vector <int> v(n);
        map<int, int> memo;
        for (int& x : v) {
            cin >> x;
            ++memo[x];
        }
        for (const auto[i, j] : memo) {
            ans += min(j, c);
        }
        cout << ans << '\n';
    }
}

int main() { no_tle_pls
    solve();
    return 0;
}








