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
const int prime = 1e9 + 7;
const int MAX = 2 << 17; 

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string str; getline(cin, str);
        istringstream is(str);
        vector<string> v;
        while(getline(is, str, ' ')) v.push_back(str);
        stable_sort(all(v), [](string a, string b) {
            return (a.size() != b.size()) ? a.size() > b.size() : false;
        });
        for (int i = 0;i < (int)v.size();++i) {
            cout << v[i];
            if (i < v.size() - 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
