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
 
int n;
vi v;
 
inline void solve() {
    if (n < 4 and n != 1) {
        cout << "NO SOLUTION" << '\n';
        return;
    }
    iota(all(v), 1);
    sort(all(v), [](int x, int y) {
        return x % 2 < y % 2;
    });
    int x = *v.rbegin();
    for (const auto &it : v) {
        cout << it;
        if (it != x) cout << " ";
    }
    cout << '\n';
}
 
int main() { no_tle_pls
    cin >> n;
    v.resize(n);
    solve();
    return 0;
