//Minha Camiseta Me Serve
//Assunto: Backtracking
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

int t, n, m, v;
string t1, t2;
bool ans;
map<string, int> qnt;

void solve(int idx, vector<pair<string, string>> tamanhos, int m) {
    if(ans) return;
    if(idx >= m) {
        ans = true;
        return;
    }
    if(qnt[tamanhos[idx].fi] != 0) {
        qnt[tamanhos[idx].fi]--;
        solve(idx+1, tamanhos, m);
        qnt[tamanhos[idx].fi]++;
    }
    if(qnt[tamanhos[idx].se] != 0) {
        qnt[tamanhos[idx].se]--;
        solve(idx+1, tamanhos, m);
        qnt[tamanhos[idx].se]++;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n >> m;
        v = n / 6;
        qnt["XXL"] = v; qnt["XL"] = v; qnt["L"] = v; qnt["M"] = v; qnt["S"] = v; qnt["XS"] = v;
        vector<pair<string, string>> tamanhos;
        loop(i, 0, m) {
            cin >> t1 >> t2;
            tamanhos.pb({t1, t2});
        }
        ans = false;
        solve(0, tamanhos, m);
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
