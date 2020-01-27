//Coloração de Cenários de Jogos
//Assunto: DFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 1050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, ans;
vector<ii> adj[MAX][MAX];
bool vis[MAX][MAX];

void dfs(int i, int j) {
    if(vis[i][j]) return;
    vis[i][j] = true;
    for(auto x : adj[i][j]) {
        dfs(x.fi, x.se);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m;
    vector<string> quadro(n);
    loop(i, 0, n) {
        cin >> quadro[i];
    }
    loop(i, 0, n) {
        loop(j, 0, m) {
            if(quadro[i][j] == '.') {
                if(i - 1 >= 0 and quadro[i-1][j] == '.') adj[i][j].pb({i-1, j});
                if(i + 1 < n and quadro[i+1][j] == '.') adj[i][j].pb({i+1, j});
                if(j - 1 >= 0 and quadro[i][j-1] == '.') adj[i][j].pb({i, j-1});
                if(j + 1 < m and quadro[i][j+1] == '.') adj[i][j].pb({i, j+1});
            } else {
                vis[i][j] = true;
            }
        }
    }
    ans = 0;
    loop(i, 0, n) {
        loop(j, 0, m) {
            if(!vis[i][j]) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << "\n";
}
