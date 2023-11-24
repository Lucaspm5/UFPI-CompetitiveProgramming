#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

int Queries[10007];

int main() { no_tle_pls
    int n, c;cin >> n;
    c = n;
    while (n--) {
        int x; cin >> x;
        ++Queries[x];
    }
    int ans {};
    for (int i = 0;i < INF;++i) {
        Queries[i + 1] += Queries[i] / 2;
        Queries[i] %= 2;
        ans += Queries[i] != 0;
    }
    cout << 33 << '\n';
    cout << ((ans <= 2 and c > 1) ? "Y" : "N") << '\n';
    return 0;
}