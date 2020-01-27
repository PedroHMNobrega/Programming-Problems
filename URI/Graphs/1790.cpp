//Detectando Pontes
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int c, p, x, y, ans, aux, a;

void dfs(int no, vector<int> adj[], bool vis[]) {
    if(vis[no] or no == 0) return;
    vis[no] = true;
    a++;
    for(auto x : adj[no]) {
        dfs(x, adj, vis);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> c >> p) {
        vector<int> adj[c+1];
        while(p--) {
            cin >> x >> y;
            adj[x].pb(y); adj[y].pb(x);
        }
        ans = 0;
        bool vis[c+1];
        loop(i, 1, c+1) {
            loop(j, 0, adj[i].size()) {
                aux = adj[i][j];
                adj[i][j] = 0;
                memset(vis, false, sizeof(vis));
                a = 0;
                dfs(i, adj, vis);
                adj[i][j] = aux;
                if(a != c) ans++;
            }
        }
        cout << ans/2 << "\n";
    }
}
