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

int n;

inline int A(int x, int y) {
    int ans = 1;
    for (int i = x; i > (x - y);i--) ans *= i;
    return (ans >> 1);
}

inline int solve(int n) {
    for (int i = 0, x;i < n;++i) cin >> x;
    return {A(10 - n, 2) * A(4, 2)};
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}