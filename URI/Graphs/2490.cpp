//Garoto Ixpertinho
//Assunto: Krustal;
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

int q, c, x, y, stop;
double t, z, ans;
vector<int> pai(MAX);
vector<int> peso(MAX);
vector<tuple<double, int, int>> edges;

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

double krustal() {
    double ans, tempo;
    int a, b;
    sort(all(edges));
    for(auto x : edges) {
        tie(tempo, a, b) = x;
        if(find(a) != find(b)) {
            join(a, b);
            ans += tempo;
            if(tempo > t) {
                stop++;
                ans += 2;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> q >> c >> t and (q||c||t)) {
        loop(i, 1, q+1) {
            pai[i] = i;
            peso[i] = 1;
        }
        while(c--) {
            cin >> x >> y >> z;
            edges.pb({z, x, y});
            edges.pb({z, y, x});
        }
        stop = 0;
        ans = krustal();
        printf("%.2f %d\n", ans, stop);
        edges.clear();
    }
}
