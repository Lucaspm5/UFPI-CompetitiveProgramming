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

int main() {
    vi x {1, 2, 3};
    // i = 0, conjunto vazio
    // 1 << n, congruente a 2^n
    // 1 << n, numero de conjuntos que podem ser formados em n elementos
    for (int i = 0;i < (1 << 3);++i) {
        for (int j = 0;j < 3;++j) {
            // verifica se o bit os j-th bit estão ligados ou não, caso ligagos imprimi o j-th elemento
            if (i & (1 << j))
                cout << x[j] << ", ";
        }
        cout << '\n';
    }
    return 0;
}
