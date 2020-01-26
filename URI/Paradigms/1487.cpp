//Six Flags
//Assunto: Greedy
#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(),x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
 
using namespace std;
 
typedef long long int ll;
typedef pair<int,int> ii;

int n, t, d, p, inst, total, pts, v, k, idx, divi;

bool crit(ii dp1, ii dp2) {
    return (dp1.s / (float)dp1.f) > (dp2.s / (float)dp2.f);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    inst = 1;
    while(cin >> n >> t && n != 0) {
        vector<ii> dp(n);
        loop(i, 0, n) {
            cin >> dp[i].f >> dp[i].s;
        }
        sort(all(dp), crit);
        total = 0;
        idx = 0;
        while(t > 0 and idx < n) {
            if(t / dp[idx].first > 0) {
                divi = t / dp[idx].first;
                total += dp[idx].second * divi;
                t -= divi * dp[idx].first;
            }
            idx++;
        }

        cout << "Instancia " << inst << "\n";
        cout << total << "\n\n";
        inst++;
    }
}
