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

int main() {
    string a; cin >> a;
    vector <string> b;
    sort(all(a));
    do {
        b.pb(a);
    } while(next_permutation(all(a)));
    cout << b.size() << '\n';
    for (const auto &it : b)
        cout << it << '\n';
    
}
