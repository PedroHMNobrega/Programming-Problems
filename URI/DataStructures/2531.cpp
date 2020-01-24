//Compras em Fdi
//Assunto: Segement Tree/ Min and Max Range Queries
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define INF 1000000050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, n2, val, q, c, i, w;
ii ans;

ii dif(vector<ii> &tree, int a, int b) {
    a += n; b += n;
    int maxi = 0;
    int mini = INF;
    while(a <= b) {
        if(a % 2 == 1) {
            maxi = max(maxi, tree[a].f);
            mini = min(mini, tree[a].s);
            a++;
        }
        if(b % 2 == 0) {
            maxi = max(maxi, tree[b].f);
            mini = min(mini, tree[b].s);
            b--;
        }
        a /= 2; b /= 2; 
    }
    return {maxi, mini};
}

void add(vector<ii> &tree, int k, int v) {
    k += n;
    tree[k].f = v, tree[k].s = v;
    for(k /= 2; k >= 1; k /= 2) {
        tree[k].f = max(tree[k*2].f, tree[k*2+1].f);
        tree[k].s = min(tree[k*2].s, tree[k*2+1].s);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n2) {
        n = pow(2, ceil(log2(n2)));
        vector<ii> tree(n*2, {0, 0});
        loop(i, 0, n2) {
            cin >> val;
            add(tree, i, val);
        }
        cin >> q;
        while(q--) {
            cin >> c >> i >> w;
            if(c == 1) {
                add(tree, i-1, w);
            } else {
                ans = dif(tree, i-1, w-1);
                cout << ans.f - ans.s << "\n";
            }
        }
    }
}
