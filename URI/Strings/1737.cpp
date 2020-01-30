//Etaoin Shrdlu
//Assunto: String;
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

int n, total;
double media;
string linha, blank, aux;

bool crit(pair<int, string> a, pair<int, string> b) {
    if(a.fi != b.fi) return a.fi > b.fi;
    else return b.se > a.se;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        getline(cin, blank);
        map<string, int> ocorrencias;
        vector<pair<int, string>> ans;
        linha = "";
        while(n--) {
            getline(cin, aux);
            linha += aux;
        }
        loop(i, 1, linha.size()) {
            aux = "";
            aux += linha[i-1]; aux += linha[i];
            ocorrencias[aux]++;
        }
        
        total = 0;
        for(auto x: ocorrencias) {
            ans.pb({x.se, x.fi});
            total += x.se;
        }
        sort(all(ans), crit);
        for(int i = 0; i < 5; i++) {
            media = ans[i].fi / (double)(total);
            cout << ans[i].se << " " << ans[i].fi << " ";
            cout << fixed << setprecision(6) << media << '\n';
        }
        cout << "\n";
    }
}
