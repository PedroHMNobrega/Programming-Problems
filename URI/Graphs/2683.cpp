//Espaço de Projeto
//Assunto: Krustal/ Maximun and Minimun;
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

int n, u, v, w;
vector<tuple<int, int, int>> edges;
vector<int> pai(MAX);
vector<int> peso(MAX);
ll ansf;

int find(int x) {
    while(x != pai[x]) x = pai[x];
    return x;
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if(peso[a] < peso[b]) swap(a, b);
    peso[a] += peso[b];
    pai[b] = a;
}

ll krustal(int swtc) {
    int a, b, d;
    ll ans = 0;
    if(swtc == 1) sort(rall(edges));
    else sort(all(edges));
    loop(i, 0, edges.size()) {
        tie(d, a, b) = edges[i];
        if(find(a) != find(b)) {
            join(a, b);
            ans += d;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(i, 0, MAX) {
        pai[i] = i;
        peso[i] = 1;
    }
    loop(i, 0, n) {
        cin >> u >> v >> w; 
        edges.pb({w, u, v});
        edges.pb({w, v, u});
    }
    ansf = krustal(1);
    cout << ansf << "\n";
    loop(i, 0, MAX) {
        pai[i] = i;
        peso[i] = 1;
    }
    ansf = krustal(2);
    cout << ansf << "\n";
}
