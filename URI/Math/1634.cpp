//Outra Loteria
//Assunto: Probabilidade;
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
#define MAX 100005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, soma, ans, ans2, divi;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m and (n||m)) {
        int participantes[n][m];
        soma = 0;
        loop(i, 0, n) loop(j, 0, m) cin >> participantes[i][j];
        loop(i, 0, n) soma += participantes[i][m-1];
        loop(i, 0, n) {
            ans2 = soma;
            ans = participantes[i][m-1];
            divi = __gcd(ans, ans2);
            ans /= divi;
            ans2 /= divi;
            cout << ans << " / " << ans2 << "\n";
        }
    }
}
