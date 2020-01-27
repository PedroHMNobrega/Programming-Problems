//Ir e Vir
//Assunto: Dfs/ Grafo Conexo
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = b; i >= a; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, v, w, p, cnt;
bool vis[2005];

void dfs(int no, vector<int> adj[]) {
    if(vis[no]) return;
    vis[no] = true;
    cnt++;
    for(auto x : adj[no]) {
        dfs(x, adj);
    }
}

int solve(int n, vector<int> adj[], vector<int> adj2[]) {
    loop(i, 1, n+1) vis[i] = false;
    cnt = 0;
    dfs(1, adj);
    if(cnt < n) return false;

    loop(i, 1, n+1) vis[i] = false;
    cnt = 0;
    dfs(1, adj2);
    if(cnt < n) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m and (n || m)) {
        vector<int> adj[n+1];
        vector<int> adj2[n+1];
        loop(i, 0, m) {
            cin >> v >> w >> p;
            adj[v].pb(w);
            adj2[w].pb(v);
            if(p == 2) {
                adj[w].pb(v);
                adj2[v].pb(w);
            }
        }
        cout << solve(n, adj, adj2) << "\n";
    }
}
