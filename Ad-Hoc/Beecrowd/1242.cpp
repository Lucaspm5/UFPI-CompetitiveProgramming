#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls cin.tie(0)->sync_with_stdio(0); cin.exceptions(cin.failbit);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

void solve() {
    string acidos;
    while (cin >> acidos) {
        int ans {};
        stack <char> fitas;
        auto bases = [](char a, char b) {
            if (b > a) swap(b, a);
            return (b == 'B' and a == 'S') or (b == 'C' and a == 'F');
        };
        for (int i = 0;i < (int)acidos.size();++i) {
            if (!fitas.empty() and bases(acidos[i], fitas.top())) {
                ++ans;
                fitas.pop();
            } else fitas.push(acidos[i]);
        }
        cout << ans << '\n';
    }
}

int main() {
    solve();
    return 0;
}








