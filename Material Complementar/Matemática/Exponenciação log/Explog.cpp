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

ll b = 1;

inline ll exp(ll a, ll e) {
    if (e == 0) return 1;
    ll b = exp(a, e >> 1);
    return { (e & 1) ? a * b * b : b * b }; 
}

int main() { _
    cout << exp(2, 14) << '\n';
    return 0;
}
