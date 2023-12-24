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

int main() {
    int n, ans = INT_MAX; cin >> n;
    vi x(n); for (int &i : x) cin >> i;
    for (int i = 1;i < (1 << n);++i) {
        ll ic1 = 0, ic2 = 0;
        for (int j = 0;j < n;++j) 
            (i & (1 << j)) ? ic1 += x[j] : ic2 += x[j];
        if (ic1 > ic2) swap(ic1, ic2);
        ans = min(1LL * ans, ic2 - ic1);
    }
    cout << ans << '\n';
    return 0;
}
