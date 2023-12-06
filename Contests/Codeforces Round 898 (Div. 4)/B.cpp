#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi v(n);
        for (int i = 0;i < n;i++) cin >> v[i];
        sort(all(v));
        v[0]++;
        int ans = 1;
        for (auto it : v) ans *= it;
        cout << ans << q;
    }
    return 0;
}
