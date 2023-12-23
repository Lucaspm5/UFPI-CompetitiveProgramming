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
 
const int MOD = 1e9 + 7;
 
int main() { no_tle_pls
    int n; cin >> n;
    ll ans = 1;
    for (int i = 0;i < n;i++) {
        ans = ((ans % MOD) * 2) % MOD; 
    }
    cout << ans << '\n';
    return 0;
