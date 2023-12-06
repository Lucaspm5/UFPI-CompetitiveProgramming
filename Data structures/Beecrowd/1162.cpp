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

inline int solve(int n, vector<int> & v) {
    int cont{};
    for (int i = 0;i < n;++i) {
        for (int j = i + 1;j < n;++j) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
                ++cont;
            }
        }
    }
    return cont;
}

int main() { no_tle_pls 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi v(n);
        for (int &x : v) cin >> x;
        cout << "Optimal train swapping takes " << solve(n, v) << " swaps." << '\n';
    }
    return 0; 
} 
