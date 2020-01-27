//Árvore Genealógica
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

int m, n, ans;
string a, b, c;
map<string, vector<string>> adj;
map<string, int> vis;
set<string> people;

void dfs(string no) {
    if(vis[no]) return;
    vis[no] = 1;
    for(auto x : adj[no]) {
        dfs(x);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> m >> n;
    while(n--) {
        cin >> a >> b >> c;
        adj[a].pb(c);
        adj[c].pb(a);
        people.insert(a);
        people.insert(c);
    }
    for(auto x : people) {
        if(!vis[x]) {
            dfs(x);
            ans++;
        }
    }
    cout << ans << "\n";
}
