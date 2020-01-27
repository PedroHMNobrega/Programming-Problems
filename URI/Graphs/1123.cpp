//Desvio de Rota
//Assunto: Dijkstra Modificado
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

int n, m, c, k, u, v, p;

int dijkstra(vector<ii> adj[], int n, int no, int destino) {
    vector<int> dist(n, INF);
    priority_queue<ii> q;

    dist[no] = 0;
    q.push({0, no});
    while(!q.empty()) {
        int a = q.top().se; q.pop();
        for(auto viz : adj[a]) {
            int b = viz.fi, w = viz.se; 
            if(dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        } 
    }
    return dist[destino];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m >> c >> k, (n||m||c||k)) {
        vector<ii> adj[n];
        loop(i, 0, m) {
            cin >> u >> v >> p;
            if(u >= c and v >= c) {
                adj[u].pb({v, p}); 
                adj[v].pb({u, p});
            }
            if(u >= c and v < c) adj[u].pb({v, p});
            if(u < c and v >= c) adj[v].pb({u, p});
            if(u < c and v < c and abs(u-v) == 1) {
                adj[u].pb({v, p}); 
                adj[v].pb({u, p});
            }
        }
        cout << dijkstra(adj, n, k, c-1) << "\n";
    }
}
