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

int main() { _ 
    int n, k; cin >> n >> k;
    vector<ll> x(n);
    map<ll, int> memo; 
    for (ll &i : x) {
        cin >> i;
        memo[i] = 1;
    }
    int ans = 0;
    for (auto &[i, j] : memo)
        ans += (memo.count(i + k));
    cout << ans << '\n';
    return 0;
}

