#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using st = size_t;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { no_tle_pls
    st n, Q; cin >> n >> Q;
    vector<vi> dp(n+1, vi(n+1));
    for (st i = 0;i < n;++i) {
        for (st j = 0; j < n;++j) {
            char c; cin >> c;
            if (c == '*') ++dp[i+1][j+1];
        }
        for (st j = 0;j < n;++j) dp[i+1][j+1] += dp[i+1][j];
    }
    for (st i = 0;i < n;++i) {
        for (st j = 1;j < n+1;++j) dp[i+1][j] += dp[i][j];
    }
    while(Q--) {
        st y1, x1, y2, x2; cin >> y1 >> x1 >> y2 >> x2;
        cout << dp[y2][x2] - dp[y2][x1-1] - dp[y1-1][x2] + dp[y1-1][x1-1] << '\n';
    }
    return 0;
}
