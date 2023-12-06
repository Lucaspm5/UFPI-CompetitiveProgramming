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

inline int invert(string n) {
    while (!n.empty() and n.back() == '0') n.pop_back();
    reverse(all(n));
    return stoi(n);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string y, x; cin >> y >> x;
        cin.ignore(1, '\n');
        int sum = invert(y) + invert(x);
        cout << invert(to_string(sum)) << '\n';
    }
    return 0;
}
