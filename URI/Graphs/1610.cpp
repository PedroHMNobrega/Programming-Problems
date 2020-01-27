//Dudu Faz Serviço
//Assunto: Verificar se existe ciclo em grafo direcionado.
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, n, m, a, b;
bool ans;

void dfs(int no, vector<int> adj[], vector<int> &vis) {
    if(vis[no] == 1) return;
    if(vis[no] == 0) {
        ans = true;
        return;
    }
    vis[no] = 0;
    for(auto x : adj[no]) dfs(x, adj, vis);
    vis[no] = 1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<int> adj[n+1];
        loop(i, 0, m) {
            cin >> a >> b;
            adj[a].pb(b);
        }
        ans = false;
        vector<int> vis(n+1, -1);
        loop(i, 1, n+1) {
            if(vis[i] < 1) dfs(i, adj, vis);
            if(ans) break;
        }
        if(ans) cout << "SIM\n";
        else cout << "NAO\n";
    }
}
