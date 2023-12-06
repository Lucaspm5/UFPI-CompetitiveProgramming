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
    int n; cin >> n;
    vi p, i;
    while (n--) {
        int x; cin >> x;
        (~x & 1) ? p.pb(x) : i.pb(x);
    }
    sort(all(p));
    sort(i.rbegin(), i.rend());
    for (auto it : p) cout << it << '\n';
    for (auto it : i) cout << it << '\n';
    return 0; 
} 
