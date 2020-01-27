//Brincando com Conjuntos
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

int t, n, mi, x, q, a, b, c;
ll aux1, aux2;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ii> conjuntos(n+1, {0, 0}); 
        loop(i, 1, n+1) {
            cin >> mi;
            while(mi--) {
                cin >> x;
                if(x < 32) {
                    conjuntos[i].fi |= (1<<x);
                } else {
                    x -= 32;
                    conjuntos[i].se |= (1<<x);
                }
            }
        }
        cin >> q;
        while(q--) {
            cin >> a >> b >> c;
            if(a == 1) {
                aux1 = conjuntos[b].fi & conjuntos[c].fi;
                aux2 = conjuntos[b].se & conjuntos[c].se;
                cout << __builtin_popcount(aux1) + __builtin_popcount(aux2) << "\n";
            } else {
                aux1 = conjuntos[b].fi | conjuntos[c].fi;
                aux2 = conjuntos[b].se | conjuntos[c].se;
                cout << __builtin_popcount(aux1) + __builtin_popcount(aux2) << "\n";
            }
        }
    }
}
