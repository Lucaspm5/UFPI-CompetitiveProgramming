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
const int MAX = 2 << 17

int main() { no_tle_pls
    int n; cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    int m; cin >> m;
    for (int i = 0; i < m;++i) {
        int x; cin >> x;
        auto it = find(all(v), x);
        v.erase(v.begin() + (it - v.begin()));
    }
    for (int i = 0;i < (n - m);++i) {
        cout << v[i];
        if (i < v.size() - 1) cout << " ";
    }
    cout << '\n';
    return 0;
}
