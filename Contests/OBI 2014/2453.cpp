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
    string str, new_str; getline(cin, str);
    int flag = 0;
    for (int i = 0;i < (int)str.size();++i) {
        if (str[i] == 'p') {
            (flag) ? new_str += str[i], flag = 0 : flag = 1;
        } else {
            new_str += str[i];
            flag = 0;
        } 
    }
    cout << new_str << '\n';
    return 0;
}
