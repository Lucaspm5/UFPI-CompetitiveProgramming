#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using st = size_t;
using vi = vector<int>;
using pii = pair<int, int>;

int n;
int grid[107][107];
bool visited[107][107];

inline int solve(int y, int x) {
    if(y < 0 or y >= n or x < 0 or x >= n or visited[y][x]) return 0;
    visited[y][x] = true;
    int ans = 1, p = grid[y][x]; 
    if (grid[y + 1][x] >= p) ans += solve(y + 1, x);
    if (grid[y - 1][x] >= p) ans += solve(y - 1, x);
    if (grid[y][x + 1] >= p) ans += solve(y, x + 1);
    if (grid[y][x - 1] >= p) ans += solve(y, x - 1);
      
    return ans;
}
int main() { no_tle_pls
    int y, x; cin >> n >> y >> x;
    y--, x--;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];
    cout << solve(y, x) << '\n';
    return 0;
}
