//Quid Est Veritas? Est Vir Qui Adest!
//Assunto: Divisão e Exponenciação Modular/ Fermats Little Theoreme / Fatorial;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), xrend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 100005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string s;
vector<ll> f(1005, -1);
ll ans, divi;

ll fat(int x) {
    if(f[x] >= 0) return f[x];
    return f[x] = ((x % MOD) * (fat(x-1) % MOD)) % MOD;
}

ll modPow(ll x, ll n, ll m) {
    if(n == 0) return 1 % m;
    long long u = modPow(x, n/2, m);
    u = (u * u) % m;
    if(n % 2 == 1) u = (u * x) % m;
    return u;
}

ll inv(ll a, ll m) {
    return modPow(a, m-2, m);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[1] = 1;
    while(cin >> s) {
        map<char, int> letras;
        loop(i, 0, s.size()) {
            letras[s[i]]++;
        }
        divi = 1;
        for(auto x : letras) divi = (divi * fat(x.se)) % MOD;
        ans = (fat(s.size()) * inv(divi, MOD)) % MOD;
        cout << ans << "\n";
    }
}
