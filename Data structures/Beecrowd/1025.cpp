#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define pb push_back
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() {
    int n, q, cont = 1;
    while (cin >> n >> q, n) {
        vi v(n), Q(q);
        for (int &x : v) cin >> x;
        for (int &x : Q) cin >> x;
        sort(all(v));
        int i {};
        cout << "CASE# " << cont << ":" << '\n';
        while (q--) {
            auto it = lower_bound(all(v), Q[i]);
            if (it == v.end() || *it != Q[i]) {
                cout << Q[i] << " not found" << '\n';
            } else {
                cout << Q[i] << " found at " << ((it - v.begin()) + 1) << '\n';
            } 
            ++i;
        }
        ++cont;
    }
    return 0;
}
