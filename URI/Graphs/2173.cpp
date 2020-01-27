//Caixa Dois
//Assunto: Krustal/ Minimum and Maximum
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, x, y, c;
vector<tuple<int, int, int>> edges;
ll ans1, ans2;
vector<int> pai(MAX);
vector<int> peso(MAX);

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
    loop(i, 0, n+1) {
        pai[i] = i;
        peso[i] = 1;
    }
    ll ans = 0;
    int a, b, c;
    sort(all(edges));
    if(swtc == 1) {
        loop(i, 0, edges.size()) {
            tie(c, a, b) = edges[i];
            if(find(a) != find(b)) {
                join(a, b);
                ans += c;
            }
        }
    } else {
        loopBack(i, edges.size()-1, 0) {
            tie(c, a, b) = edges[i];
            if(find(a) != find(b)) {
                join(a, b);
                ans += c;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m and (n||m)) {
        while(m--) {
            cin >> x >> y >> c;
            edges.pb({c, x, y});
        }
        ans1 = krustal(1);
        ans2 = krustal(2);
        cout << ans2 - ans1 << "\n";
        edges.clear();
    }
}
