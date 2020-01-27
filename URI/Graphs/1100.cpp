//Movimentos do Cavalo
//Assunto: BFS
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

string x, y;
int x1, x2, yx, y2, ans;
map<char, int> convert;
vector<ii> adj[9][9];
map<ii, int> dist;
map<ii, bool> vis;

void bfs(ii no) {
    dist.clear();
    vis.clear();
    queue<ii> q;
    vis[no] = true;
    dist[no] = 0;
    q.push(no);
    while(!q.empty()) {
        ii top = q.front(); q.pop();
        for(auto u : adj[top.fi][top.se]) {
            if(!vis[u]) {
                vis[u] = true;
                dist[u] = dist[top] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    convert['a'] = 1; convert['b'] = 2; convert['c'] = 3; convert['d'] = 4; convert['e'] = 5; convert['f'] = 6; convert['g'] = 7; convert['h'] = 8;
    loop(i, 1, 9) {
        loop(j, 1, 9) {
            if(i + 2 <= 8) {
                if(j + 1 <= 8) adj[i][j].pb({i + 2, j + 1});
                if(j - 1 >= 1) adj[i][j].pb({i + 2, j - 1});
            }
            if(i - 2 >= 1) {
                if(j + 1 <= 8) adj[i][j].pb({i - 2, j + 1});
                if(j - 1 >= 1) adj[i][j].pb({i - 2, j - 1});
            }
            if(i + 1 <= 8) {
                if(j + 2 <= 8) adj[i][j].pb({i + 1, j + 2});
                if(j - 2 >= 1) adj[i][j].pb({i + 1, j - 2});
            }
            if(i - 1 >= 1) {
                if(j + 2 <= 8) adj[i][j].pb({i - 1, j + 2});
                if(j - 2 >= 1) adj[i][j].pb({i - 1, j - 2});
            }  
        }
    }
    while(cin >> x >> y) {
        x1 = (int)x[1] - '0'; x2 = convert[x[0]];
        yx = (int)y[1] - '0'; y2 = convert[y[0]];
        bfs({x1, x2});
        ans = dist[{yx, y2}];
        cout << "To get from " << x << " to " << y << " takes " << ans << " knight moves.\n";
    }
}
