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

map <char, int> hrs {{'b', 8}, {'a', 4}, {'m', 6}, {'d', 12}};
map <char, int> rest;

void solve() {
    int t, ans {}; cin >> t;
    while (t--) {
        string n, p;
        int cghr;
        cin >> n >> p >> cghr;
        ans += cghr / hrs[p[0]];
        rest[p[0]] += cghr % hrs[p[0]];
        ans += rest[p[0]] / hrs[p[0]];
        if (rest[p[0]] >= hrs[p[0]]) rest[p[0]] -= hrs[p[0]];
    }
    cout << ans << '\n';
}

int main() { no_tle_pls
    solve();
    return 0;
}








