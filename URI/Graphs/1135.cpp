//Colônia de Formigas
//Assunto: Lowest Common Ancestor/ Distance Queries/ Tree
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, a, q, s, t;
ll l;
vector<int> depth(MAX);
vector<ii> pai(MAX);

void dfs(int no, int ante, vector<pair<int, ll>> adj[], int d, int p, int dist) {
    depth[no] = d;
    pai[no].fi = p;
    pai[no].se = dist;
    for(auto x : adj[no]) {
        if(x.fi != ante) dfs(x.fi, no, adj, d+1, no, x.second);
    }
}

ll solve(int i, int j) { 
    ll ans = 0;
    while(i != j) {
        if(depth[i] == depth[j]) {
            ans += pai[i].second + pai[j].second;
            i = pai[i].fi;
            j = pai[j].fi;
        } else if(depth[i] > depth[j]) {
            ans += pai[i].second;
            i = pai[i].fi;
        } else {
            ans += pai[j].second;
            j = pai[j].fi;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        vector<pair<int, ll>> adj[n+1];
        pai[0] = {0, 0}; depth[0] = 0;
        loop(i, 1, n) {
            cin >> a >> l;
            adj[i].pb({a, l}); adj[a].pb({i, l});
        }
        dfs(0, -1, adj, 0, 0, 0);
        cin >> q;
        while(q--) {
            cin >> s >> t;
            if(q > 0) cout << solve(s, t) << " ";
            else cout << solve(s, t) << "\n";
        }
    }
}
