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

inline ll solve(ll n) {
    ll ans = n;
    if (n <= 1) return 1;
    return ans + solve(n >> 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << 1LL * solve(n) << '\n';
    }
    return 0;
}

