//Fila do Banco
//Assunto: Fatorial/ Aritmetica Modular;
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
#define MOD 1000000009
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n;
ll ans;
vector<ll> f(1000005, -1);

ll fat(int x) {
    if(f[x] >= 0) return f[x];
    return f[x] = ((x % MOD) * (fat(x-1) % MOD)) % MOD; 
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[3] = 1; f[4] = 4;
    while(cin >> n and n) {
        ans = fat(n);
        cout << ans << "\n";
    }
}
