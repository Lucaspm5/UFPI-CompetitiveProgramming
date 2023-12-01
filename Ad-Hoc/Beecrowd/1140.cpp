#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;
const int MAX = 2 << 17;

int main() { no_tle_pls
    string str;
    while (getline(cin, str), str[0] != '*') {
        transform(all(str), str.begin(), [](char c) { return tolower(c); });
        istringstream is(str);
        map<char, int> c;
        while(is >> str) c[str[0]] = 1;
        size_t ans {};
        for (const auto[i, j] : c) ans += j > 0;
        cout << (ans > 1 ? 'N' : 'Y') << '\n';
    }
    return 0;
}
