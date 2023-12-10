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
 
int n;
set<int> A;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    vi v(n);
    for (int &x : v) {
        cin >> x;
        if (x <= n and x >= 1) A.insert(x);
    }
    cout << (n - A.size()) << '\n';
    return 0;
}
