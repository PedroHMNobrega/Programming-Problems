//Recuperação
//Assunto: Math;
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

int n, test = 1, ans, soma, x; 
bool got;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n) {
        soma = 0; ans = -INF; got = false;
        loop(i, 0, n) {
            cin >> x;
            if(x == soma and !got) {
                ans = x;
                got = true;
            }
            soma += x;
        }
        cout << "Instancia " << test << "\n";
        if(ans == -INF) cout << "nao achei\n\n";
        else cout << ans << "\n\n";
        test++;
    }
}
