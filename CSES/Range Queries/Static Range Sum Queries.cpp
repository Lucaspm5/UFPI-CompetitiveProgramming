#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls cin.tie(0)->sync_with_stdio(0); cin.exceptions(cin.failbit);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define rvb pop_back
#define pf push_front
#define rvf pop_front
#define lb lower_bound
#define up upper_bound
#define f first
#define s second
#define q '\n'
#define sz(x) (int)(x).size()
#define debug(x) cout << #x << " is " << x << q
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;
 
int main() { no_tle_pls
    int n, k; cin >> n >> k;
    vll p(n + 1);
    p[0] = 0;
    for (int i = 0;i < n;i++) {
        int x; cin >> x;
        p[i+1] = p[i] + x;
    }
    while (k--) {
        int l, r; cin >> l >> r;
        cout << (p[r] - p[l-1]) << q;
    }
    return 0;
}
