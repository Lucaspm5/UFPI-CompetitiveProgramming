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
    int p, a, r;
    while (cin >> p >> a >> r and (p or a or r)) {
        set<string> perolas;
        vector<pair<string,int>> wins;
        cin.ignore(1, '\n');
        while(p--) {
            string x; getline(cin, x);
            perolas.insert(x);
        }
        while(a--) {
            int resp = 0;
            string x; getline(cin, x);
            for (int i = 0;i < r;++i) {
                string y; getline(cin, y);
                resp += (perolas.count(y));
            }
            wins.pb({x, resp});
        }
        sort(all(wins), [](pair<string, int> A, pair<string, int> B) {
            return (A.s == B.s) ? A.f < B.f : A.s > B.s; 
        });
        int aux = wins[0].s;
        set<string> _max;
        for (auto &[i, j] : wins) {
            if (aux > j) break;
            _max.insert(i);
        }
        auto last = *_max.rbegin();
        for (auto &it : _max) {
            cout << it;
            if (it != last) cout << ",";
        }
        cout << "\n";
    }
    return 0;
}
