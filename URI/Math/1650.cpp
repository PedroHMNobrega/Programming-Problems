//Pintura Preto e Branco
//Assunto: Observação;
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

int n, m, c, v1, v2, r1, r2, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m >> c and (n||m||c)) {
        v1 = n - 8;
        v2 = m - 8;
        r1 = (v1 / 2) + 1;
        r2 = ((n - 9) / 2) + 1;
        if(n == 8) {
            ans = (v2 / 2) + 1;
            if(!c and m % 2 == 0) ans--;
        } else {
            if(c == 0) swap(r1, r2);
            if(v2 % 2 == 0) ans = (((v2+1) / 2) * r2) + ((((v2+1) / 2) + 1) * r1);
            else ans = ((v2+1) / 2 * r2) + ((v2+1) / 2 * r1);
        }
        cout << ans << "\n";  
    }
}
