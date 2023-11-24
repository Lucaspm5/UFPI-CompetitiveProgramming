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
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        map<pair <char, char>, int>memo;
        int it1 = 97, it2 = 98, aux {}; 
        for (int i = 1;i <= 650;++i) {
            it2 += it1 == it2;
            memo[{it1, it2}] = i;
            ++aux, ++it2;
            if (aux == 25) {
                aux = 0, it2 = 97;
                ++it1;
            }
        }
        cout << memo[{n[0], n[1]}] << '\n';
    }
    return 0;
}
