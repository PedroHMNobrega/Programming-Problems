//Credo com ParaTudo!
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
#define MAX 405
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, p, a, b, k, l;
int possible[MAX][MAX];
vector<bool> vis(MAX, false);
vector<int> adj[MAX];
vector<int> ex;

void dfs(int no, vector<int> &ex) {
    if(vis[no]) return;
    vis[no] = true;
    ex.pb(no);
    for(auto x : ex) {
        possible[no][x] = 1;
        possible[x][no] = 1;
    }
    for(auto x : adj[no]) {
        dfs(x, ex);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m >> p;
    while(m--) {
        cin >> a >> b;
        adj[a].pb(b); adj[b].pb(a);
    }
    loop(i, 1, n+1) {
        if(!vis[i]) {
            dfs(i, ex);
            ex.clear();
        }
    }
    while(p--) {
        cin >> k >> l;
        if(possible[k][l] == 1) cout << "Lets que lets\n";
        else cout << "Deu ruim\n";
    }
}
