//Jogo da Memória
//Assunto: Lowest Common Ancestor/ Tree
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 50050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, a, b, ans, num;
vector<int> pai(MAX);
vector<int> nivel(MAX);

void dfs(int no, int nv, int p, vector<int> adj[], int ante) {
    pai[no] = p;
    nivel[no] = nv;
    for(auto x : adj[no]) {
        if(x != ante) dfs(x, nv+1, no, adj, no);
    }
}

int ancestor(int x, int y) {
    int dist = 0;
    while(x != y) {
        if(nivel[x] > nivel[y]) {
            x = pai[x];
            dist++;
        } else if(nivel[y] > nivel[x]) {
            y = pai[y];
            dist++;
        } else {
            x = pai[x];
            y = pai[y];
            dist += 2;
        }
    }
    return dist;
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    vector<int> adj[n+1];
    vector<int> pares[n/2 + 1];
    loop(i, 1, n+1) {
        cin >> num;
        pares[num].pb(i);
    }
    loop(i, 1, n) {
        cin >> a >> b;
        adj[a].pb(b); adj[b].pb(a);
    }
    dfs(1, 0, 1, adj, 1);
    ans = 0;
    loop(i, 1, n/2 + 1) {
        ans += ancestor(pares[i][0], pares[i][1]);
    }
    cout << ans << "\n";
}
