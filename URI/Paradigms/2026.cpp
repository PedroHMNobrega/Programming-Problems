//Árvore de Natal
//Assunto: KnapSack
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int g, p, w, ans;
int dp[101][1001];

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    cin >> g;
    loop(galho, 1, g+1) {
        cin >> p;
        cin >> w;
        vector<int> peso(p+1), qtd(p+1);
        loop(i, 1, p+1) {
            cin >> qtd[i] >> peso[i];
        }
        
        loop(i, 0, p+1) {
            loop(j, 0, w+1) {
                if(i > 0 and j > 0) {
                    if(j - peso[i] >= 0) {
                        dp[i][j] = max(dp[i-1][j], qtd[i] + dp[i-1][j - peso[i]]);
                    } else {
                        dp[i][j] = dp[i-1][j];
                    }
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        ans = dp[p][w];
        cout << "Galho " << galho << ":\n";
        cout << "Numero total de enfeites: " << ans << "\n\n";
    }
}
