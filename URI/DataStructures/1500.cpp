//Consultas Horríveis
//Axunto: Segment Tree Lazy Propagation;
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
#define MAX 400400
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, n, c, p, q, v, w;
ll tree[MAX] = {0};
ll lazy[MAX] = {0};
ll ans, aux;

void updateLazy(int a, int b, int k, int x, int y, ll add) {
    int mid = (x + y) / 2, esq = k*2+1, dir = k*2+2;
    if(lazy[k] != 0) {
        tree[k] += (y-x+1) * lazy[k];
        if(x != y) {
            lazy[esq] += lazy[k];
            lazy[dir] += lazy[k];
        }
        lazy[k] = 0;
    }
    if(x > b or a > y) return;
    if(x >= a and y <= b) {
        tree[k] += (y-x+1) * add;
        if(x != y) {
            lazy[esq] += add;
            lazy[dir] += add;
        }
        return;
    }
    updateLazy(a, b, esq, x, mid, add);
    updateLazy(a, b, dir, mid+1, y, add);
    tree[k] = tree[esq] + tree[dir];
}

ll sum(int a, int b, int k, int x, int y) {
    int mid = (x + y) / 2, esq = k*2+1, dir = k*2+2;
    if(lazy[k] != 0) {
        tree[k] +=  (y-x+1) * lazy[k];;
        if(x != y) {
            lazy[esq] += lazy[k];
            lazy[dir] += lazy[k];
        }
        lazy[k] = 0;
    }
    if(x > b or a > y) return 0;
    if(x >= a and y <= b) return tree[k];
    ll soma = sum(a, b, esq, x, mid) + sum(a, b, dir, mid+1, y);
    return soma;
}

void construir(int array[], int x, int y, int k) {
    if(x > y) return;
    if(x == y) {
        tree[k] = array[x];
        return;
    }
    int mid = (x + y) / 2, esq = k*2+1, dir = k*2+2;
    construir(array, x, mid, esq);
    construir(array, mid+1, y, dir);
    tree[k] = tree[esq] + tree[dir];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n >> c;
        int array[n]; 
        memset(array, 0, sizeof(array));
        //n = pow(2, ceil(log2(n)));
        n = sizeof(array) / sizeof(array[0]);
        construir(array, 0, n-1, 0);

        while(c--) {
            cin >> w >> p >> q;
            p--; q--;
            if(p > q) swap(p, q);
            if(w == 0) {
                cin >> v;
                updateLazy(p, q, 0, 0, n-1, v);
            } else {
                ans = sum(p, q, 0, 0, n-1);
                cout << ans << '\n';
            }
        }
        memset(tree, 0, sizeof(tree));
        memset(lazy, 0, sizeof(lazy));
    }
}
