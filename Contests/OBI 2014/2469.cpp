#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

int main() { no_tle_pls
    int n; cin >> n;
    map <int, int> memo;
    for(int i = 0;i < n;++i) {
        int x;cin >> x;
        ++memo[x];
    }
    pair<int, int> ans {-INF, -INF};
    for (const auto[i, j] : memo) {
        if (j >= ans.s) {
            ans.s = j;
            ans.f = max(ans.f, i);
        }
    }
    cout << ans.f << '\n';
    return 0;
}
