//Produto do Intervalo:
//Assunto: Segment Tree/ Multiplication Range Queries
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, n2, w, num, z, v;
char c;
int soma;

int sum(vector<int> &tree, int a, int b) {
    a += n; b += n;
    int p = 1;
    while(a <= b) {
        if(a % 2 == 1) p *= tree[a++];
        if(b % 2 == 0) p *= tree[b--];
        a /= 2; b /= 2; 
    }
    return p;
}

int add(vector<int> &tree, int k, int x) {
    k += n;
    if(x > 0) {
        tree[k] = 1;
    } else if(x == 0) {
        tree[k] = 0;
    } else {
        tree[k] = -1;
    }
    for(k /= 2; k >= 1; k /= 2) {
        tree[k] = tree[2*k] * tree[2*k+1];
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n2 >> w) {
        n = pow(2, ceil(log2(n2)));
        vector<int> tree(n*2, 1);//Lembrar de o tamanho ser potencia de 2
        vector<char> ans;
        loop(i, 0, n2) {
            cin >> num;
            add(tree, i, num);
        }

        loop(i, 0, w) {
            cin >> c >> z >> v;
            if(c == 'C') {
                add(tree, z-1, v);
            } else {
                soma = sum(tree, z-1, v-1);
                if(soma > 0) {
                    ans.pb('+');
                } else if(soma == 0) {
                    ans.pb('0');
                } else {
                    ans.pb('-');
                }
            }
        }
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i];
        } cout << "\n";
    }
}
