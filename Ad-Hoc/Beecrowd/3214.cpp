#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls cin.tie(0)->sync_with_stdio(0); cin.exceptions(cin.failbit);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

int e, f, c;

void solve() {
    cin >> e >> f >> c;
    int t = e + f, ans {};
    while (t >= c) {
        int cheias = t / c;
        ans += cheias;
        t = t % c + cheias;
    }
    cout << ans << '\n';
}

int main() { no_tle_pls
    solve();
    return 0;
}








