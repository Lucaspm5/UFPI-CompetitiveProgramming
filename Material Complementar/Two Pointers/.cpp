// Contar a qnt de subarray com a soma D
// Estrategia 2x o vetor
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

const ll MAX = (1e6 + 7)  * 3;

int main() { _ 
    int n, d; cin >> n >> d;
    vector<ll> x(3 * MAX);
    for (int i = 0;i < n;++i) {
        cin >> x[i];
        x[n + i] = x[i];
    }
    int l = 0, r = 0, sum = x[0], ans = 0;
    // enquanto o l não chegar a n, estamos em um limite valido
    while (l <= n - 1) {
        // se r chegou em um ponto onde há sobreposição com o l, o l é descontado
        if (r - l >= n)
            sum -= x[l++];
        // incrementa o prox valor a soma
        else if (sum < d) 
            sum += x[++r];
        // descontamos o valor de l, e incrementamos ele a 1
        else if (sum > d)
            sum -= x[l++];
        // se minha soma chegou a d, avancamos os 2 pointers para o proximo intervalo (l + 1, r + 1)
        else if (sum == d) {
            ++ans;
            sum += x[++r];
            sum -= x[l++];
        }
    }
    /*
        Alternativa semelhante (Preffix sum)
        K é o valor a ser encontrado
        map<int, int> memo;
        ++memo[0];
        int ans = 0, sum = 0;
        for (int i = 0;i < n;++i) {
            int x; cin >> x;
            sum += x;
            ans += memo[sum - k];
            ++memo[sum];
        }
    */
    cout << ( ans ) << '\n';
    return 0;
}


