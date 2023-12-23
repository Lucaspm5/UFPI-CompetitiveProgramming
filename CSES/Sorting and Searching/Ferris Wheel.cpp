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
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int &x : p) cin >> x;
    sort(all(p));
    int ans = 0, i = 0, j = n - 1;
    while (i <= j) {
        i += (p[i] + p[j] <= x);
        --j;
        ++ans;
    }
    cout << ans << '\n';
    return 0;
}
