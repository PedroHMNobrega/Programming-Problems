//Roteadores
//Assunto: Krustal
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int r, c, v, w, p;
vector<int> pai(MAX);
vector<int> peso(MAX, 1);

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

int krustal(vector<tuple<int, int, int>> edges) {
    int p, a, b, ans = 0;
    sort(all(edges));
    loop(i, 0, edges.size()) {
        tie(p, a, b) = edges[i];
        if(find(a) != find(b)) {
            join(a, b);
            ans += p;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> r >> c;
    vector<tuple<int, int, int>> edges;
    loop(i, 0, c) {
        cin >> v >> w >> p;
        edges.pb({p, v, w});
    }
    loop(i, 0, MAX) pai[i] = i;
    cout << krustal(edges) << "\n";
}
