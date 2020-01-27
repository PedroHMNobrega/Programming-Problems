//Conta de Luz
//Assunto: Math/ Observação;
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

int a, b;

int lwh(int x) {
    if(x > 4979900) return 1000000 + (x - 4979900)/7;
    if(x > 29900) return 10000 + (x - 29900)/5;
    if(x > 200) return 100 + (x - 200)/3;
    return x/2;
}

ll valor(ll x) {
    ll v = 0;
    if (x <= 100) return 2 * x;
    if (x <= 10000) return 2 * 100 + 3 * (x  - 100);
    if (x <= 1000000) return 2 * 100 + 3 * 9900 + 5 * (x - 10000);
    return 2 * 100 + 3 * 9900 + 5 * 990000 + 7 * (x - 1000000);
}

int solve(int x) {
    int dif, ini = 1, fim = x-1, meio;
    meio = (ini + fim) / 2;
    dif = abs(valor(x - meio) - valor(meio));
    while(dif != b) {
        if(dif > b) ini = meio+1;
        else fim = meio-1;
        meio = (fim + ini) / 2;
        dif = abs(valor(x - meio) - valor(meio));
    }
    return meio;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> a >> b and (a||b)) 
        cout << valor(solve(lwh(a))) << "\n";   
}
