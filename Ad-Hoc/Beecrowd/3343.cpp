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

int main() { no_tle_pls
    int n, x; cin >> n >> x;
    string tam; cin >> tam;
    int p, m, g; cin >> p >> m >> g;
    int pavc{}, mavc{}, gavc{};
    vector<int> muralha(n, x);
    for (const char& it : tam) {
        switch(it) {
            case 'P':
                while (p > muralha[pavc]) ++pavc;
                muralha[pavc] -= p;
                break;
            case 'M':
                while (m > muralha[mavc]) ++mavc;
                muralha[mavc] -= m;
                break;
            case 'G':
                while (g > muralha[gavc]) ++gavc;
                muralha[gavc] -= g;
                break;
        }
    }
    cout << max({pavc, mavc, gavc}) + 1 << '\n';
    return 0;
}









