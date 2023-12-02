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

size_t N, C, T;

inline bool f(int x, const vector<int>& p) {
    ll pipocas = T * x;
    size_t c = 1, i {};
    while (i < N) {
        if (pipocas >= p[i]) pipocas -= p[i++];
        else {
            ++c;
            pipocas = T * x;
        }
        if (c > C) return false;
    }
    return true;
}

inline size_t solve(const vector<int>& p) {
    ll l = 0, r = 1e9 + 30, ans = 2 << 17;
    while (r - l >= 1) {
        ll m = (r + l) >> 1;
        f(m, p) ? r = m : l = m + 1;
    }
    return l; 
}

int main() { no_tle_pls
    cin >> N >> C >> T;
    vi p(N);
    for (int &x : p) cin >> x;
    cout << solve(p) << '\n';
    return 0;
}
