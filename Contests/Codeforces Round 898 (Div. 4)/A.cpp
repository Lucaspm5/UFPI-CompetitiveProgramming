#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

string fixo {"abc"};

int main() {
    int t; cin >> t;
    while (t--) {
        int ans{};
        string str; cin >> str;
        cin.ignore(1 , '\n');
        for (int i = 0;i < 3;++i)
            ans += (str[i] != fixo[i]);
        cout << (ans > 2 ? "NO" : "YES") << '\n';
    }
    return 0;
}
