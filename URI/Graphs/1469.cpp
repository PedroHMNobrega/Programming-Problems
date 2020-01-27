//Chefe
//Assunto: DFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, ins, x, y, a, b, mini, lm;
char it;

void dfs(int no, vector<int> pai[], vector<int> &idade, vector<bool> &vis, bool swtc) {
    if(vis[no]) return;
    vis[no] = true;
    if(swtc) mini = min(mini, idade[no]);
    for(auto x : pai[no]) {
        dfs(x, pai, idade, vis, true);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m >> ins) {
        vector<int> idade(n+1);
        vector<int> pai[n+1];
        loop(i, 1, n+1) {
            cin >> idade[i];
        }
        loop(i, 0, m) {
            cin >> x >> y;
            pai[y].pb(x);
        }
        loop(j, 0, ins) {
            cin >> it;
            if(it == 'T') {
                cin >> a >> b;
                loop(i, 1, n+1) {
                    lm = pai[i].size();
                    for(int k = 0; k < lm; k++) {
                        if(pai[i][k] == a) pai[i][k] = b;
                        else if(pai[i][k] == b) pai[i][k] = a;
                    }
                }
                swap(pai[a], pai[b]);
            } else {
                cin >> a;
                mini = INF;
                vector<bool> vis(n+1, false);
                dfs(a, pai, idade, vis, false);
                if(mini >= INF) cout << "*\n";
                else cout << mini << "\n";
            }
        }
    }
}
