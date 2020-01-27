//Sistema Cipoviário
//Assunto: Krustal/ Ordenação linear para diminuir o tempo;
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

int test = 1, n, m, u, v, c;
vector<int> pai(MAX);
vector<int> peso(MAX);
vector<ii> v1, v2, v3;

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

ll krustal() {
    ll ans;
    int a, b, c1 = 0, c2 = 0, c3 = 0;
    loop(i, 0, v1.size()) {
        a = v1[i].fi; b = v1[i].se;
        if(find(a) != find(b)) {
            join(a, b);
            c1++;
        }
    }
    loop(i, 0, v2.size()) {
        a = v2[i].fi; b = v2[i].se;
        if(find(a) != find(b)) {
            join(a, b);
            c2++;
        }
    }
    loop(i, 0, v3.size()) {
        a = v3[i].fi; b = v3[i].se;
        if(find(a) != find(b)) {
            join(a, b);
            c3++;
        }
    }
    ans = (c1 * 1235) + (c2 * 8977) + (c3 * 10923);
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m) {
        loop(i, 0, n+1) {
            pai[i] = i;
            peso[i] = 1;
        }
        while(m--) {
            cin >> u >> v >> c;
            if(c == 1235) {
                v1.pb({u, v});
                v1.pb({v, u});
            } else if(c == 8977) {
                v2.pb({u, v});
                v2.pb({v, u});
            } else {
                v3.pb({u, v});
                v3.pb({v, u});
            }
        }
        cout << "Instancia " << test << "\n";
        cout << krustal() << "\n\n";
        test++;
        v1.clear(); v2.clear(); v3.clear();
    }
}
