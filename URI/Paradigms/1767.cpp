//Saco do Papai Noel
//Assunto: DP Bottom - Up
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

int n, p, q, w;
int dp[101][51];
int ans, peso, sobra;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(test, 0, n) {
        cin >> p;
        vector<ii> pac(p+1);
        loop(i, 1, p+1) {
            cin >> q >> w;
            pac[i].f = q;
            pac[i].s = w;
        }

        loop(obj, 0, p+1) {
            loop(ps, 0, 51) {
                if(obj == 0 or ps == 0) {
                    dp[obj][ps] = 0;
                } else {
                    if(pac[obj].s > ps) {
                        dp[obj][ps] = dp[obj-1][ps];
                    } else {
                        dp[obj][ps] = max(dp[obj-1][ps], dp[obj-1][ps-pac[obj].s] + pac[obj].f);
                    }
                }
            }
        }
        ans = dp[p][50];
            
        sobra = 0;
        peso = 0;
        int j = 50;
        for(int i = p; i > 0; i--) {
            if(dp[i][j] != dp[i-1][j]) {
                sobra++;
                peso += pac[i].s;
                if(j - pac[i].s >= 0) {
                    j-= pac[i].s;
                }
            }
        }

        cout << ans << " brinquedos\n";
        cout << "Peso: " << peso << " kg\n";
        cout << "sobra(m) " << p - sobra << " pacote(s)\n\n";
    }
}
