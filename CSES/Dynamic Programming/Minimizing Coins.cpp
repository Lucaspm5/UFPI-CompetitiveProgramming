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
#define ll long long
#define f first
#define s second
#define q '\n'
#define sz(x) (int)(x).size()
#define debug(x) cout << #x << " is " << x << q
#define sp(v) for (auto& x : v) cin >> x;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;
 
int main() {
    int n, x, ans = 0; cin >> n >> x;
    vi dp(x+1, INF), v(n);
    sp(v);
    dp[0] = 0;
    for (int i = 1;i <= x;i++) {
        for (auto m : v) {
            if (i >= m) dp[i] = min(dp[i], dp[i - m] + 1);
        }
    }
    cout << (dp[x] != INF ? dp[x] : -1) << q;
    return 0;
