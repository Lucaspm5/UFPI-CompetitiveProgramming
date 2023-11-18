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
    int n;
    while (cin >> n, n) {
        queue <int> fila;
        for (int i = 1;i <= n;++i) fila.push(i);
        cout << "Discarded cards: ";
        while (fila.size() >= 2) {
            cout << fila.front();
            if (fila.size() > 2) cout << ", ";
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        cout << '\n';
        cout << "Remaining card: " << fila.front() << '\n';
    }
}

int main() { no_tle_pls
    solve();
    return 0;
}








