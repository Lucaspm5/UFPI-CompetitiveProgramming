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

int main() { no_tle_pls
    vector<int> v(5);
    for (int i = 0;i < 5;++i) cin >> v[i];
    int x = v[0], c{}, d{};
    for (int i = 1; i < 5;++i) {
        d += v[i] <= x;
        c += v[i] >= x;
        x = v[i];
    }
    if (d == 4) cout << "D";
    else if (c == 4) cout << "C";
    else cout << "N";
    cout << '\n';
    return 0;
}
