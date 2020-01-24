//Precisa-se de Matemáticos em Marte
//Assunto: Bit ou Segment Tree
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, n2, num, idx;
char q;

int soma(vector<int> &tree, int a, int b) {
    a += n; b += n;
    int s = 0;
    while(a <= b) {
        if(a % 2 == 1) s += tree[a++];
        if(b % 2 == 0) s += tree[b--];
        a /= 2; b /= 2;
    }
    return s;
}

void add(vector<int> &tree, int k, int v, int swtc) {
    k += n;
    if(swtc == 0) {
        tree[k] = v;
        for(k /= 2; k >= 1; k /= 2) {
            tree[k] = tree[k*2] + tree[k*2+1];
        }
    } else {
        tree[k] = 0;
        for(k /= 2; k >= 1; k /= 2) {
            tree[k] = tree[k*2] + tree[k*2+1];
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n2;
    n = pow(2, ceil(log2(n2)));
    vector<int> tree(n*2, 0);
    for(int i = 0; i < n2; i++) {
        cin >> num;
        add(tree, i, num, 0);
    }
    while(cin >> q >> idx) {
        if(q == 'a') {
            add(tree, idx-1, 0, 1);
        } else {
            cout << soma(tree, 0, idx-1) - tree[(idx-1) + n]<< "\n";
        }
    }
}
