//Removendo Letras
//Assunto: Print Subsequências da String  
#include <bits/stdc++.h>
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
#define MAX 1000005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string seq, aux;
map<string, int> show;

void solve(string s) {
    if(s.size() == 0 or show[s] > 0) return;
    show[s] = true;
    loop(i, 0, s.size()) {
        aux = s;
        aux.erase(aux.begin()+i);
        solve(aux);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> seq) {
        solve(seq);
        for(auto x : show) if(x.fi.size() > 0) cout << x.fi << '\n';
        cout << '\n';
        show.clear();
    }
}
