//DFSr - Hierarquia de Profundidade
//Assunto: DFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = b; i >= a; i--)
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, v, a, a1, a2, k;
string space;
bool vis[22];

void dfs(vector<vector<int>> adj, int no, string b, int u2) {
    vis[no] = true;
    for(auto u : adj[no]) {
        k++;
        cout << b << no << "-" << u;
        if(!vis[u]) {
            cout << " pathR(G," << u << ")\n";
            dfs(adj, u, b + "  ", u2);
        } else {
            cout << "\n";
        }
    }
    if(no == u2 and k > 0) cout << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(teste, 1, n+1) {
        memset(vis, false, sizeof(vis));
        cin >> v >> a;
        vector<vector<int>> adj(v);
        loop(i, 0, a) {
            cin >> a1 >> a2;
            adj[a1].pb(a2);
            sort(all(adj[a1]));
        }
        cout << "Caso " << teste << ":\n";
        loop(i, 0, v) {
            if(!vis[i]) {
                k = 0;
                dfs(adj, i, "  ", i);
            }
        }
    }
}
