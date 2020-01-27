//Mesa da Sra. Montagny!
//Assunto: Bipartite Graph
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

int test = 1, n, m, u, v;

bool bipartite(int no, vector<int> adj[]) {
    int cor;
    queue<int> q;
    vector<int> vis(n+1, 0);
    q.push(no);
    vis[no] = 1;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        if(vis[top] == 1) cor = 2;
        else cor = 1;
        for(auto x : adj[top]) {
            if(vis[x] == 0) {
                vis[x] = cor;
                q.push(x);
            }
            if(vis[x] == vis[top]) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m) {
        vector<int> adj[n+1];
        while(m--) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        cout << "Instancia " << test << "\n";
        if(n <= 2 or bipartite(1, adj)) cout << "sim\n\n";
        else cout << "nao\n\n";
        test++;
    }
}
