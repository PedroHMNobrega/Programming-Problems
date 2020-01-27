//Cidade Proibida
//Assunto: BFS
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
#define MAX 1005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, a, b, c, r, e;

int bfs(vector<int> adj[]) {
    queue<int> q;
    vector<int> dist(n+1);
    vector<bool> vis(n+1, false);
    dist[c] = 0;
    q.push(c);
    vis[c] = true;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for(auto x : adj[top]) {
            if(x != e and !vis[x]) {
                vis[x] = true;
                dist[x] = dist[top] + 1;
                q.push(x);
            } 
        }
    }
    return dist[r];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m) {
        vector<int> adj[n+1];
        while(m--) {
            cin >> a >> b;
            adj[a].pb(b); adj[b].pb(a);
        }
        cin >> c >> r >> e;
        cout << bfs(adj) << "\n";
    }
}
