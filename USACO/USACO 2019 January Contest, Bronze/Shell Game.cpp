#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main() { _
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<pii> itens(3);
    for (int i = 0;i < 3;++i)
        cin >> itens[i].f >> itens[i].s;
    int t = 100, i = 0;
    while (t--) {
        int b1 = (i % 3), b2 = (i + 1) % 3;
        int cp = min(itens[b1].s, itens[b2].f - itens[b2].s);
        itens[b1].s -= cp;
        itens[b2].s += cp;
        ++i;
    }
    for (auto [i, j] : itens)
        cout << j << '\n';
    return 0;
}
