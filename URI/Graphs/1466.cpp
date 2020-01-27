//Percurso em Árvore por Nível
//Assunto: Arvore Binária de Busca/ BFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int c, n, r, e;
unordered_map<int, ii> adj;
vector<int> ans;

void criaArvore(int ele, int raiz) {
    if(ele < raiz) {
        if(adj[raiz].fi == -1) adj[raiz].fi = ele;
        else criaArvore(ele, adj[raiz].fi);
    } else {
        if(adj[raiz].se == -1) adj[raiz].se = ele;
        else criaArvore(ele, adj[raiz].se);
    }
}

void bfs(int no) {
    queue<int> q;
    q.push(no);
    while(!q.empty()) {
        int top = q.front(); q.pop();
        ans.pb(top);
        if(adj[top].fi != -1) q.push(adj[top].fi);
        if(adj[top].se != -1) q.push(adj[top].se);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> c;
    loop(test, 1, c+1) {
        cin >> n;
        cin >> r; adj[r] = {-1, -1};
        loop(i, 1, n) {
            cin >> e;
            adj[e] = {-1, -1};
            criaArvore(e, r);
        }
        bfs(r);
        cout << "Case " << test << ":\n";
        loop(i, 0, n) {
            if(i < n-1) cout << ans[i] << " ";
            else cout << ans[i] << "\n";
        } cout << "\n";
        adj.clear();
        ans.clear();
    }
}
