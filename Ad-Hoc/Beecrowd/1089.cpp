#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define pb push_back
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    while (cin >> n, n) {
        vi v(n);
        for (int &x : v) cin >> x;
        v.pb(v[0]);v.pb(v[1]);
        int ans {};
        for (int i = 1;i <= n; ++i) {
            ans += ((v[i] > v[i-1] and v[i] > v[i+1]) or (v[i] < v[i-1] and v[i] < v[i+1]));
        }
        cout << ans << '\n';
    }
    return 0;
}
