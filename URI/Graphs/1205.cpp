//Cerco a Leningrado
//Assunto: Dijkstra
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 10000000
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, k, v1, v2, a, o, d, at, total;
float p, ans;

int dijkstra(int no, int d, vector<ii> adj[], int n) {
    vector<bool> vis(n+1, false);
    vector<int> dist(n+1, INF);
    priority_queue<ii> q;
    dist[no] = 0;
    q.push({0, no});
    while(!q.empty()) {
        int a = q.top().se; q.pop();
        if(!vis[a]) {
            vis[a] = true;
            for(auto x : adj[a]) {
                int b = x.fi, w = x.se;
                if(dist[a] + w < dist[b]) {
                    dist[b] = dist[a] + w;
                    q.push({-dist[b], b});
                }
            }
        }
    }
    return dist[d];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m >> k >> p) {
        vector<ii> adj[n+1];
        vector<ii> elementos;
        loop(i, 0, m) {
            cin >> v1 >> v2;
            elementos.pb({v1, v2});
        }
        cin >> a;
        vector<int> atiradores(n+1, 0);
        loop(i, 0, a) {
            cin >> at;
            atiradores[at]++;
        }
        cin >> o >> d;
        
        loop(i, 0, m) {
            v1 = elementos[i].fi; v2 = elementos[i].se;
            adj[v1].pb({v2, atiradores[v2]});
            adj[v2].pb({v1, atiradores[v1]});
        }
        total = atiradores[o];
        total += dijkstra(o, d, adj, n);
        ans = pow(p, total);
        if(ans >= INF or total > k) ans = 0;
        printf("%.3f\n", ans);
    }
}
