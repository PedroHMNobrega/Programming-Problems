//Ginástica
//Assunto: Dp
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, mini, maxi;
ll ans;
ll dp[52][100500];

ll solve(int tA, int nA) {
    if(tA >= t) {
        return 1;
    }
    if(dp[tA][nA] >= 0) return dp[tA][nA];
    ll ans = 0;
    if(nA+1 <= maxi) {
        ans += solve(tA+1, nA+1) % MOD;
    }
    if(nA-1 >= mini) {
        ans += solve(tA+1, nA-1) % MOD;
    }
    return dp[tA][nA] = ans % MOD;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t >> mini >> maxi;
    memset(dp, -1, sizeof(dp));
    ans = 0;
    if(((maxi - mini) + 1) % 2 == 0) {
        loop(i, 0, ((maxi - mini) / 2) + 1) {
            ans += solve(1, mini + i) % MOD;
        }
        ans = (ans * 2) % MOD;
    } else {
        loop(i, 0, (maxi - mini) / 2) {
            ans += solve(1, mini + i) % MOD;
        }
        ans = (ans * 2) % MOD;
        ans += solve(1, mini + ((maxi - mini) / 2)) % MOD;
    }
    cout << ans % MOD << "\n";
}
