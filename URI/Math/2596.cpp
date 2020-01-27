//Xenlonguinho
//Assunto: Numero de Divisores;
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
#define MAX 100
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, n, ans;

int divi(int x) {
    int cnt = 0, i;
    for(i = 1; i <= x/2; i++) {
        if(x % i == 0) {
            cnt++;
        }
    }
    return cnt+1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        loop(i, 1, n+1) if(divi(i) % 2 == 0) ans++;
        cout << ans << "\n";
    }
}
