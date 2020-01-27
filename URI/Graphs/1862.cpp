//Casas de Westeros
//Assunto: Lista de Adjacência/ Matriz de adjacência;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    vector<string> tabela(n);
    vector<int> adj[n];
    set<vector<int>> casas;
    loop(i, 0, n) {
        cin >> tabela[i];
        loop(j, 0, n) {
            if(tabela[i][j] == 'S') adj[i].pb(j);
        }
        casas.insert(adj[i]);
    }
    vector<int> ans;
    int tam = 0;
    for(auto x : casas) {
        ans.pb(x.size());
        tam += x.size();
    }
    sort(rall(ans));
    if(tam != n) cout << "-1\n";
    else {
        cout << casas.size() << '\n';
        loop(i, 0, ans.size()) {
            if(i < ans.size()-1) cout << ans[i] << " ";
            else cout << ans[i] << '\n';
        }
    }
}
