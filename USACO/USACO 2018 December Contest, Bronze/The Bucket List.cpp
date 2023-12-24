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
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n, ans {}; cin >> n;
    vi bucket(1005, 0);
    for (int i = 0;i < n;++i) {
        int si, ti, b; cin >> si >> ti >> b;
        for (int t = si; t <= ti; ++t)
            ans = max(ans, bucket[t] += b);
    }
    cout << ans << '\n';
    return 0;
}
