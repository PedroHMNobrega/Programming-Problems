//Loteria
//Assunto: Primos/ Crivo de Erastosthenes/ Fatorial/ Combinação;
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
#define MAX 80000
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, k, cnt, nPrimo;
ll ans, aux;
vector<int> crivo(2550, 0);
vector<ll> f(60, -1);
int bilhete[51][51];

ll fat(int x) {
    if(f[x] >= 0) return f[x];
    return f[x] = x * fat(x-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[1] = 1; f[2] = 2;
    crivo[0] = -1; crivo[1] = -1;
    loop(i, 2, 2550) {
        if(crivo[i]) continue;
        for(int j = 2*i; j <= 2550; j += i) crivo[j] = i;
    }
    while(cin >> n >> m >> k and (n||m||k)) {
        cnt = 0; nPrimo = 0;
        loop(i, 0, n) {
            loop(j, 0, m) {
                if(crivo[cnt] != 0) nPrimo++;
                bilhete[i][j] = cnt;
                cnt++;
            }
        }
        if(k == 1) {
            ans = nPrimo;
        } else {
            ans = 0;
            if(n >= k) {
                loop(j, 0, m) {
                    cnt = 0;
                    loop(i, 0, n) if(crivo[bilhete[i][j]] != 0) cnt++;
                    if(cnt == k) ans++;
                    else if(cnt > k) {
                        aux = 1;
                        loop(w, (cnt-k)+1, cnt+1) aux *= w;
                        ans += (aux / fat(k));
                    }
                } 
            }
            if(m >= k) {
                loop(i, 0, n) {
                    cnt = 0;
                    loop(j, 0, m) if(crivo[bilhete[i][j]] != 0) cnt++;
                    if(cnt == k) ans++;
                    else if(cnt > k) {
                        aux = 1;
                        loop(w, (cnt-k)+1, cnt+1) aux *= w;
                        ans += (aux / fat(k));
                    }
                } 
            }
        }
        cout << ans << "\n";
    }
}
