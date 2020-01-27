//Imposto Real
//Assunto: DFS;
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

int n, capacidade, a, b, c, ans;

void dfs(int no, int dist, vector<ii> adj[], vector<int> &imposto, vector<bool> &vis, int pai) {
    if(vis[no]) return;
    vis[no] = true;
    for(auto x : adj[no]) {
        dfs(x.fi, x.se, adj, imposto, vis, no);
    }
    if(no != 1) {
        ans += ceil(imposto[no]/(double)(capacidade)) * 2 * dist;
        imposto[pai] += imposto[no];
        imposto[no] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> capacidade;
    vector<ii> adj[n+1];
    vector<int> imposto(n+1);
    loop(i, 1, n+1) cin >> imposto[i];
    loop(i, 1, n) {
        cin >> a >> b >> c;
        adj[a].pb({b, c});
        adj[b].pb({a, c});
    }   
    vector<bool> vis(n+1, false);
    ans = 0;
    dfs(1, 0, adj, imposto, vis, 1);
    cout << ans << "\n";
}
