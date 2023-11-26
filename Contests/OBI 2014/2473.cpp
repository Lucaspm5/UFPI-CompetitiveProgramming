#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 1e9 + 7;

int x;

int main() { no_tle_pls
    bitset<107> cnj;
    for (int i = 0;i < 6;++i) {
        cin >> x;cnj[x] = 1;
    }
    for (int i = 0;i < 6;++i) {
        cin >> x;cnj[x] = 0;
    }
    if (cnj.count() == 3) {
        cout << "terno";
    } else if (cnj. count() == 2) {
        cout << "quadra";
    } else if (cnj.count() == 1) {
        cout << "quina";
    } else if (cnj.count() == 0) cout << "sena";
    else cout << "azar";
    cout << '\n';
    return 0;
}