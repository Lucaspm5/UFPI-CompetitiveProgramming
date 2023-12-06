#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
 
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, k, ans {}, i {}; cin >> n >> k;
        string str; cin >> str;
        while (i < n) {
            if (str[i] == 'B') {
                ans += 1;
                i += k - 1;
            }
            ++i;
        }
        cout << ans << '\n';
    }
    return 0;
}
