//Troco
//Assunto: DP
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int v, m;
int moedas[1123];
bool ans;
bool dp[100050][1005];

void solve(int idx, int falta) {
    if(falta < 0 or ans) return;
    if(falta == 0) {
        ans = true;
        return;
    }
    if(idx >= m) return;
    if(dp[falta][idx] == true) return;
    solve(idx+1, falta);
    solve(idx+1, falta-moedas[idx]);
    dp[falta][idx] = true;
    return;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> v >> m;
    loop(i, 0, m) {
        cin >> moedas[i];
    }
    ans = false;
    solve(0, v);
    if(ans) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}
