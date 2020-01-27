//Polígonos Regulares Construtíveis
//Assunto: Poligono Construtivel
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

int t, n;
ll prod;
vector<ll> primosFermat = {3, 5, 17, 257, 65537};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        loop(i, 0, primosFermat.size()) 
            if(n % primosFermat[i] == 0) 
                n /= primosFermat[i];
        if((n & (n-1)) == 0) cout << "Yes\n";
        else cout << "No\n"; 
    }
}
