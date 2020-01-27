//106 Milhas Para Chicago
//Assunto: Dijkstra;
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

int n, m, a, b;
double p;

double dijkstra(vector<pair<int, double>> adj[], int ini, int fim) {
    vector<double> dist(fim+1, 0);
    priority_queue<pair<double, int>> q;
    vector<bool> vis(fim+1, false);
    dist[ini] = 1;
    q.push({1, ini});
    while(!q.empty()) {
        int a = q.top().se; q.pop();
        if(!vis[a]) {
            vis[a] = true;
            for(auto x : adj[a]) {
                int b = x.fi; double d = x.se;
                if(dist[a] * d > dist[b]) {
                    dist[b] = dist[a] * d;
                    q.push({dist[b], b});
                } 
            }
        }
    }
    return dist[fim];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        vector<pair<int, double>> adj[n+1];
        cin >> m;
        loop(i, 0, m) {
            cin >> a >> b >> p;
            adj[a].pb({b, p/100}); adj[b].pb({a, p/100});
        }
        printf("%.6f percent\n", dijkstra(adj, 1, n) * 100);
    }
}
