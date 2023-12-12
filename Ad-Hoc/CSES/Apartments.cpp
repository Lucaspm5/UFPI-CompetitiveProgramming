#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int n, m, k;

int main() { _
    cin >> n >> m >> k;
    vi p(n), a(m);
    int i {};
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, m) cin >> a[i];
    int ans {}, j {};
    sort(all(p));
    sort(all(a));
    i = 0;
    while (i < n and j < m) {
        if (abs(p[i] - a[j]) > k) {
            int resp = max(p[i], a[j]);
            resp == p[i] ? ++j : ++i;
        } else {
            ++i, ++j, ++ans;
        }
    }
    cout << ans << '\n';
    return 0;
}
