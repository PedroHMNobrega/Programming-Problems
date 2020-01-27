//Reino De Alice
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

int h, l, ans, cnt;
int mapa[405][405];
char c;
map<ii, int> vis;

void dfs(ii no) {
    int i = no.fi, j = no.se;
    if(vis[no] == 1) return;
    vis[no] = 1;
    cnt++;
    if(mapa[i+1][j] == 1) dfs({i+1, j});
    if(mapa[i-1][j] == 1) dfs({i-1, j});
    if(mapa[i][j+1] == 1) dfs({i, j+1});
    if(mapa[i][j-1] == 1) dfs({i, j-1});
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    memset(mapa, -1, sizeof(mapa));
    cin >> h >> l;
    vector<ii> castelos;
    loop(i, 0, h) {
        loop(j, 0, l) {
            cin >> c;
            if(c == 'C') {
                castelos.pb({i, j});
                mapa[i][j] = 1;
            }
        } 
    }
    
    ans = 0;
    for(auto x : castelos) {
        if(vis[x] == 0) {
            cnt = 0;
            dfs(x);
            ans = max(ans, cnt);
        }
    }
    cout << ans << "\n";
}
