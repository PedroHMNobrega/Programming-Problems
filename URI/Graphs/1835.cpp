//Promessa de Campanha
//Assunto: DFS/ Conexão de grafos
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, n, m, x, y, cnt;

void dfs(int no, vector<bool> &vis, vector<int> adj[]) {
    if(vis[no]) return;
    vis[no] = true;
    for(auto x: adj[no]) {
        dfs(x, vis, adj);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    loop(test, 1, t+1) {
        cin >> n;
        vector<int> adj[n+1];
        cin >> m;
        loop(i, 0, m) {
            cin >> x >> y;
            adj[x].pb(y); adj[y].pb(x);
        }
        vector<bool> vis(n+1, false);
        cnt = 0;
        loop(i, 1, n+1) {
            if(!vis[i]) {
                dfs(i, vis, adj);
                cnt++;
            }
        }
        if(cnt == 1) printf("Caso #%d: a promessa foi cumprida\n", test);
        else printf("Caso #%d: ainda falta(m) %d estrada(s)\n", test, cnt-1);
    }
}

