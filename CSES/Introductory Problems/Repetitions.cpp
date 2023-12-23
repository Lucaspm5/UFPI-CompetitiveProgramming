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
    string s; cin >> s;
    int ans {1}, max = INT_MIN;
    for (int i {};i < sz(s);i++) {
        ans += (s[i] == s[i+1]);
        else {
            if (ans > max) max = ans;
            ans = 1;
        }
    }
    cout << max << q;
    return 0;
}
