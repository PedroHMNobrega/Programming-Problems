//Componentes Conexos
//Assunto: DFS
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

int n, v, a, ans;
char a1, a2;
map<char, vector<char>> adj;
map<char, bool> vis;
set<char> ans2;

void dfs(char no) {
    if(vis[no]) return;
    vis[no] = true;
    ans2.insert(no);
    for(auto u : adj[no]) {
        dfs(u);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(test, 1, n+1) {
        ans = 0;
        cin >> v >> a;
        loop(i, 0, a) {
            cin >> a1 >> a2;
            adj[a1].pb(a2);
            adj[a2].pb(a1);
        }
        cout << "Case #" << test << ":\n";
        loop(i, 'a', 'a'+v) {
            if(!vis[i]) {
                dfs(i);
                for(auto a : ans2) {
                    cout << a << ",";
                } cout << "\n";
                ans++;
                ans2.clear();
            }
        }
        cout << ans << " connected components\n\n";
        vis.clear(); adj.clear();
    }
}
