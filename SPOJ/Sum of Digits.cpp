#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

string n;

inline void solve(const string &n) {
    ll sum {};
    for(int i = 0;i < sz(n);++i) sum += (n[i] - '0');
    cout << sum << '\n';
}

int main() { _
    int t; cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
