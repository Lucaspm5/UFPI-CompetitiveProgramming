#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { no_tle_pls
    size_t n, k, x; cin >> n >> k;
    vector<ll> prefix_sum(n+1);
    map<ll, size_t> memo;
    memo[0] = 1;
    prefix_sum[0] = 0;
    for (size_t i = 0;i < n;i++) {
        cin >> x;
        prefix_sum[i+1] = 1LL * (prefix_sum[i] + x);
    }  
    ll ans {};
    for (size_t i = 0;i < n;++i) {
        ans += memo[prefix_sum[i+1] - k];
        ++memo[prefix_sum[i+1]];
    }
    cout << ans << '\n';
    return 0;
}
