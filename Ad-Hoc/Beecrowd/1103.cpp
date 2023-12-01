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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 2 << 17;

int main() { no_tle_pls
    size_t h1, m1, h2, m2; 
    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (!h1 && !m1 && !h2 && !m2) break;
        h1 += (not h1 ? 24 : 0);
        h2 += (not h2 ? 24 : 0);
        h1 = h1 * 60 + m1;
        h2 = h2 * 60 + m2;
        h2 += (h1 > h2 ? 24 * 60 : 0);
        cout << h2 - h1 << '\n';
    }
    return 0;
}
