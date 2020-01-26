//Doces
//Assunto: DP
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

int m, n;
ll ans;

ll back(ll dp[], vector<int> &cx, int idx, int n) {
    if(idx >= n) return 0;
    if(dp[idx] >= 0) return dp[idx];
    ll coloca, nColoca;
    nColoca = back(dp, cx, idx+1, n);
    coloca = cx[idx] + back(dp, cx, idx+2, n);
    dp[idx] = max(nColoca, coloca);
    return dp[idx];
    
}

ll back2(vector<ll> &dp, vector<ll> &sl, int idx, int m) {
    if(idx >= m) return 0;
    if(dp[idx] >= 0) return dp[idx];
    ll coloca, nColoca;
    nColoca = back2(dp, sl, idx+1, m);
    coloca = sl[idx] + back2(dp, sl, idx+2, m);
    return dp[idx] = max(coloca, nColoca);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> m >> n && m != 0 && n != 0) {
        vector<int> k(n);
        vector<vector<int>> caixas(m, k);
        vector<ll> somaLinha(m, 0);

        loop(i, 0, m) {
            loop(j, 0, n) {
                cin >> caixas[i][j];
            }
        }

        ll dp1[n];
        loop(i, 0, m) {
            memset(dp1, -1, sizeof(dp1));
            somaLinha[i] = back(dp1, caixas[i], 0, n);
        }

        vector<ll> dp2(m, -1);
        ans = back2(dp2, somaLinha, 0, m);
        cout << ans << "\n";
    }
}   
