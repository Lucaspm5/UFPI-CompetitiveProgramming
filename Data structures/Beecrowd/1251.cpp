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

void solve(string str) {
    map <int, int> v;
    for (int i = 0;i < (int)str.size();++i) ++v[(int)str[i]];
    vector <pair<int, int>> x(all(v));
    sort(all(x), [](pair<int, int> a, pair<int, int> b) {
        return (a.s == b.s) ? a.f > b.f : a.s < b.s;
    });
    for (const auto[i, j] : x)
        cout << i << " " << j << '\n';
}

int main() { no_tle_pls
    string str;
    int f = 1;
    while (cin >> str) {
        if (not f) cout << '\n';
        f = 0;
        solve(str);
    }
    return 0;
}
