//Transmissão de Energia
//Assunto: DFS/ Grafo conexo
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int e, l, x, y, test = 1;

void dfs(int no, vector<bool> &vis, vector<int> adj[]) {
    if(vis[no]) return;
    vis[no] = true;
    for(auto x: adj[no]) {
        dfs(x, vis, adj);
    }
}

bool solve(vector<int> adj[]) {
    vector<bool> vis(e+1, false);
    int cnt = 0;
    loop(i, 1, e+1) {
        if(!vis[i]) {
            dfs(i, vis, adj);
            cnt++;
            if(cnt > 1) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> e >> l and (e||l)) {
        vector<int> adj[e+1];
        while(l--) {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        cout << "Teste " << test << "\n";
        if(solve(adj)) cout << "normal\n\n";
        else cout << "falha\n\n";
        test++;
    }
}
