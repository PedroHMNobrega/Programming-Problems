//Um Jogo com Bolas de Gude
//Assunto: Math;
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

int n;
ll ans, f, ante;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        vector<int> bacia(n);
        loop(i, 0, n) cin >> bacia[i];
        ans = 0; f = 0;
        loopBack(i, n-1, 0) {
            ante = bacia[i] + f;
            ans += ante;
            f += ante;
        }
        cout << ans << "\n";  
    }
}
