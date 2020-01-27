//O Rato no Labirinto
//Assunto: BFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, ent, out, cheese, ans, j;
string a, b;

int bfs(int no, int fim, vector<int> adj[]) {
    vector<bool> vis(n+1, false);
    queue<ii> q;
    vis[no] = true;
    q.push({no, 0});
    while(!q.empty()) {
        int top = q.front().fi, cnt = q.front().se; q.pop();
        if(top == fim) return cnt;
        for(auto x : adj[top]) {
            if(!vis[x]) {
                vis[x] = true;
                q.push({x, cnt+1});
            }
        }
    }
} 

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m;
    vector<int> adj[n+1];
    map<string, int> numb;
    j = 1;
    loop(i, 0, m) {
        cin >> a >> b;
        if(numb[a] == 0) {
            numb[a] = j;
            j++;
        }
        if(numb[b] == 0) {
            numb[b] = j;
            j++;
        }
        if(a == "Entrada") ent = numb[a];
        else if(a == "Saida") out = numb[a];
        else if(a == "*") cheese = numb[a];
        if(b == "Entrada") ent = numb[b];
        else if(b == "Saida") out = numb[b];
        else if(b == "*") cheese = numb[b];
        adj[numb[a]].pb(numb[b]); adj[numb[b]].pb(numb[a]);
    }
    ans = bfs(ent, cheese, adj);
    ans += bfs(cheese, out, adj);
    cout << ans << "\n";
}

