//Acácias
//Assunto: Krustal, Union Find, DFS;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, k, c, j, nFami = 0;
ll custo = 0;
vector<tuple<int, int, int>> edges;
vector<int> pai(MAX);
vector<int> peso(MAX, 1);
vector<int> adj[MAX];
vector<bool> vis(MAX, false);

int find(int x) {
    while(x != pai[x]) x = pai[x];
    return x;
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(peso[a] < peso[b]) swap(a, b);
    peso[a] += peso[b];
    pai[b] = a;
}


ll krustal() {
    int a, b, dist;
    ll ans = 0;
    sort(all(edges));
    for(int i = 0; i < edges.size(); i++) {
        tie(dist, a, b) = edges[i];
        if(find(a) != find(b)) {
            join(a, b);
            ans += dist;
            adj[a].pb(b); adj[b].pb(a);
        }
    }
    return ans;
}

void dfs(int no) {
    if(!vis[no]) {
        vis[no] = true;
        for(auto x : adj[no]) {
            dfs(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(i, 1, n+1) pai[i] = i;
    loop(i, 1, n) {
        cin >> k;
        while(k--) {
            cin >> j >> c;
            edges.pb({c, i, j});
        }
    }
    custo = krustal();
    loop(i, 1, n+1) {
        if(!vis[i]) {
            nFami++;
            dfs(i);
        }
    }
    cout << nFami << " " << custo << "\n";
}
