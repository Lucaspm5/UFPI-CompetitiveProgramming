#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define pb push_back
#define debug(x) cout << #x << " is " << x << '\n'
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

inline int solve(int k, int l) {
    return (k == l) ? 0 : 1 + solve(k >> 1, l >> 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k, l; cin >> k >> l;
    switch(solve(--k, --l)) {
        case 1:cout << "oitavas";break;
        case 2:cout << "quartas";break;
        case 3:cout << "semifinal";break;
        case 4:cout << "final";break;
    }
    cout << '\n';
    return 0;
}

