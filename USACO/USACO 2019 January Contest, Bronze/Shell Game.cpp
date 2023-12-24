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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n, ans {}; cin >> n;
    vi freq(3, 0), balls(3, 0);
    iota(all(balls), 0);
    for (int i = 0;i < n;++i) {
        int x, y, z; cin >> x >> y >> z;
        swap(balls[x-1], balls[y-1]);
        ++freq[balls[z-1]];
        ans = max(ans, freq[balls[z-1]]);
    }
    cout << ans << '\n';
    return 0;
}
