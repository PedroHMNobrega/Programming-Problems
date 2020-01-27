//Prefixa, Infixa e Posfixa
//Assunto: Tree Transversal/ Infixo, Posfixo e Prefixo/ Recursividade
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int c, n, r;
string in, pre;

void solve(int i, int j) {
    if(i <= j) {
        int idx = in.find(pre[r++]);
        solve(i, idx-1);
        solve(idx+1, j);
        cout << in[idx];
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> c;
    while(c--) {
        cin >> n;
        cin >> pre >> in;
        r = 0;
        solve(0, in.size()-1);
        cout << "\n";
    }
}
