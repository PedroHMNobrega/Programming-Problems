//Resgate em Queda Livre
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
#define MAX 550
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int c, n, x, y;
double ans, d;
vector<ii> distancia;
map<ii, int> nodes;
int pai[MAX];
int peso[MAX];

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

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

double krustal(vector<tuple<double, int, int>> &edges) {
    double d, a = 0;
    int p1, p2;
    sort(all(edges));
    for(auto x : edges) {
        tie(d, p1, p2) = x;
        if(find(p1) != find(p2)) {
            join(p1, p2);
            a += d;
        }
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> c;
    while(c--) {
        vector<tuple<double, int, int>> edges;
        cin >> n;
        loop(i, 0, n) {
            cin >> x >> y;
            nodes[{x, y}] = i+1;
            distancia.pb({x, y});
        }
        loop(i, 0, n) {
            loop(j, i+1, n) {
                d = dist(distancia[i].fi, distancia[i].se, distancia[j].fi, distancia[j].se) / 100;
                edges.pb({d, nodes[distancia[i]], nodes[distancia[j]]});
            }
        }
        for(int i = 0; i < n+1; i++) {
            pai[i] = i;
            peso[i] = 1;
        }
        ans = krustal(edges);
        printf("%.2f\n", ans);
        nodes.clear(); distancia.clear();
    }
}
