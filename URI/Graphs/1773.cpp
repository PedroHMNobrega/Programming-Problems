//Preso no Castelo
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
#define MAX 250
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, a, b, c;
bool ans;

void bfs(int no, vector<int> adj[], vector<int> chaves[], vector<bool> &tenho, vector<bool> &vis) {
    queue<int> q;
    vector<bool> falta(n+1, false);
    q.push(no);
    vis[no] = true;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for(auto x : chaves[top]) {
            tenho[x] = true;
            if(falta[x]) {
                vis[x] = true;
                q.push(x);
            }
        }
        for(auto x: adj[top]) {
            if(!vis[x] and tenho[x]) {
                vis[x] = true;
                q.push(x);
            } else if(!tenho[x]) {
                falta[x] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m) {
        vector<int> adj[n+1];
        vector<int> chaves[n+1];
        vector<bool> tenho(n+1, false);
        vector<bool> vis(n+1, false);
        loop(i, 0, m) {
            cin >> a >> b;
            adj[a].pb(b); adj[b].pb(a);
        }
        loop(i, 2, n+1) {
            cin >> c;
            chaves[c].pb(i);
        }
        tenho[1] = true;
        bfs(1, adj, chaves, tenho, vis);
        ans = true;
        loop(i, 1, n+1) {
            if(!vis[i] and ans) ans = false;
        }
        if(ans) cout << "sim\n";
        else cout << "nao\n";
    }
}
