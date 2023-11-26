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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int &x : v) cin >> x;
        sort(v.rbegin(), v.rend());
        cout << (v[0] - v[n-1]) + (v[1] - v[n-2]) << '\n'; 
    }
    return 0;
}
