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

vi v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main() { no_tle_pls
    size_t t; cin >> t;
    cin.ignore(1, '\n');
    size_t i = 0;
    while (t--) {
        size_t ans {};
        string s; cin >> s;
        cin.ignore(1, '\n');
        int pos = 0;
        for (size_t i = 0;i < 4;++i) {
            int x = s[i] == '0' ? 10 : s[i] - '0';
            int it = lower_bound(all(v), x) - v.begin();
            ans += 1 + (abs(it - pos));
            pos = it;
        }
        cout << ans << '\n';
    }
    return 0;
}
