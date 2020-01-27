//Bicho da Goiaba
//Assunto: BFS/ Profundidade;
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

int t, a, b, x, y, i, j;

int bfs(int x, int y, map<ii, vector<ii>> adj) {
    queue<ii> q;
    map<ii, int> dist;
    map<ii, int> vis;
    int ans = 0;
    dist[{x, y}] = 0;
    vis[{x, y}] = 1;
    q.push({x, y});
    while(!q.empty()) {
        ii top = q.front(); q.pop();
        for(auto x : adj[top]) {
            if(!vis[x]) {
                vis[x] = 1;
                dist[x] = dist[top] + 1;
                ans = max(ans, dist[x]);
                q.push(x);
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> a >> b;
        a++; b++;
        int mat[a][b];
        map<ii, vector<ii>> adj;
        vector<ii> show;
        loop(i, 1, a) {
            loop(j, 1, b) {
                cin >> mat[i][j];
                if(mat[i][j] == 1) show.pb({i, j});
            }
        }
        for(auto x : show) {
            i = x.fi; j = x.se;
            if(i+1 < a) {
                if(mat[i+1][j] == 1) adj[{i, j}].pb({i+1, j});
                if(j + 1 < b and mat[i+1][j+1] == 1) adj[{i, j}].pb({i+1, j+1});
                if(j - 1 > 0 and mat[i+1][j-1] == 1) adj[{i, j}].pb({i+1, j-1});
            }
            if(i-1 > 0) {
                if(mat[i-1][j] == 1) adj[{i, j}].pb({i-1, j});
                if(j + 1 < b and mat[i-1][j+1] == 1) adj[{i, j}].pb({i-1, j+1});
                if(j - 1 > 0 and mat[i-1][j-1] == 1) adj[{i, j}].pb({i-1, j-1});

            }
            if(j + 1 < b and mat[i][j+1] == 1) adj[{i, j}].pb({i, j+1});
            if(j - 1 > 0 and mat[i][j-1] == 1) adj[{i, j}].pb({i, j-1});
        }
        cin >> x >> y;
        cout << bfs(x, y, adj) << "\n";
    }
}
