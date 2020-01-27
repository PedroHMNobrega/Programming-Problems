//Soma de Fatoriais
//Assunto: Fatorial;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m;
ll ans;
vector<ll> f(25, -1);

ll fat(int x) {
    if(f[x] >= 0) return f[x];
    return f[x] = x * fat(x-1);
} 

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[0] = 1; f[1] = 1;
    while(cin >> n >> m) {
        ans = fat(n) + fat(m);
        cout << ans << "\n";
    }
}
