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
const int MAX = 2 << 17;

int main() { no_tle_pls
    string A, B; cin >> A;
    cin.ignore(1, '\n');
    cin >> B;
    cin.ignore(1, '\n');
    for (int i = 0;i < (int)B.size();++i)
        cout << A[B[i] - 'a'];
    cout << '\n';
    return 0;
}
