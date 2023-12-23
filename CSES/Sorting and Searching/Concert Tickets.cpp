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
 
int n, m;
 
inline int _solve(multiset<int>& p, int x) {
    auto it = p.upper_bound(x);
    if (it == p.begin()) 
        return -1;
    --it;
    int ans = *it;
    p.erase(it);
    return ans;
}
 
int main() { _
    cin >> n >> m;
    multiset<int> p;
    for (int i = 0;i < n;++i) {
        int x; cin >> x;
        p.insert(x);
    }
    for (int i = 0;i < m;++i) {
        int x; cin >> x;
        cout << _solve(p, x) << '\n';
    }
    return 0;
