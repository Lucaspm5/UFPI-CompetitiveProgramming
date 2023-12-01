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

size_t match = 8;

inline char solve(vector<char>& teams, size_t match) {
    if (teams.size() == 1) return *teams.begin();
    vector<char> winners;
    for (int i = 0;i < match;++i) {
        size_t x, y; cin >> x >> y;
        winners.push_back(x > y ? teams[2*i] : teams[2*i+1]);
    }
    teams = winners;
    return solve(teams, match >> 1);
}

int main() { no_tle_pls
    vector<char> teams;
    for (char i = 'A';i <= 'P';++i) teams.push_back(i);
    cout << solve(teams, match) << '\n';
    return 0;
}
