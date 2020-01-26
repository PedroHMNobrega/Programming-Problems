//Cortando Canos
//Assunto: DP repetindo elementos
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, t, c, v, ans;
int dp[2500][1050];

int solve(vector<ii> &canos, int idx, int aguenta) {
    if(idx >= n) return 0;
    if(aguenta <= 0) return 0;
    if(dp[aguenta][idx] >= 0) return dp[aguenta][idx];
    if(canos[idx].f <= aguenta) {
        return dp[aguenta][idx] = max(solve(canos, idx+1, aguenta), solve(canos, idx, aguenta - canos[idx].f) + canos[idx].s);
    }
    return dp[aguenta][idx] = solve(canos, idx+1, aguenta);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> t;
    vector<ii> canos(n);
    loop(i, 0, n) {
        cin >> c >> v;
        canos[i].f = c;
        canos[i].s = v;
    }
    memset(dp, -1, sizeof(dp));
    ans = solve(canos, 0, t);
    cout << ans << "\n";  
}
