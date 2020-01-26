//Festival de Estátuas de Gelo:
//Assunto: Coin Problem
#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
#define INF 5000000;
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m, mn;
    vector<int> dp(1000000);
    cin >> t;
    loop(test, 0, t) {
        cin >> n >> m;
        vector<int> blocos(n);
        loop(i, 0, n) {
            cin >> blocos[i];
        }
        dp[0] = 0;
        loop(i, 1, m+1) {
            dp[i] = INF;
            for(auto j : blocos) {
                if(i - j >= 0) {
                    dp[i] = min(dp[i], dp[i-j] + 1);
                }
            }
        }
        cout << dp[m] << "\n";
    }
}  
