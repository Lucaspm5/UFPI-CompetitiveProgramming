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

int ans = -INF, o = 0;
vector<vector<char>> grid(100, vector<char>(100));

inline void points(int x, int y) {
    if (grid[x][y] == 'o') ++o;
    else if (grid[x][y] == 'A') o = 0;
    ans = max(ans, o);
}

int main() { no_tle_pls
    int n; cin >> n;
    for (int i = 0;i < n;++i) {
        for (int j = 0;j< n;++j) cin >> grid[i][j];
    }
    for (int i = 0;i < n;++i) {
        if (~i & 1) {
            for (int j = 0;j < n;++j) points(i, j);
        } else 
            for (int j = n - 1;j >= 0;j--) points(i, j);
    }
    cout << ans << '\n';
    return 0;
}