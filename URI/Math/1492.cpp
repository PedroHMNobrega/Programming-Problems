//Contando Uns
//Assunto: Digit DP;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), xrend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 100005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

ll a, b, ansF;
ll dp[60][60][2];
string sa, sb;

ll solve(int idx, ll soma, bool tight, string num) {
    if(idx < 0) return soma;
    if(dp[idx][soma][tight] >= 0) return dp[idx][soma][tight];
    int limite = (tight ? num[idx] - '0' : 1);
    ll ans = 0;
    if(limite == 1) ans += solve(idx-1, soma, 0, num);
    ans += solve(idx-1, soma+limite, tight, num);
    return dp[idx][soma][tight] = ans;
}

string toBin(ll x) {
    string s = "";
    while(x) {
        s += (x & 1) + '0';
        x >>= 1;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> a >> b) {
        sa = toBin(a - 1); sb = toBin(b);
        memset(dp, -1, sizeof(dp));
        ansF = solve(sb.size()-1, 0, 1, sb);
        memset(dp, -1, sizeof(dp));
        ansF -= solve(sa.size()-1, 0, 1, sa);
        cout << ansF << "\n";
    }
}
