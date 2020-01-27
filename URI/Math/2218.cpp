//O Temível Evil-Son
//Assunto: Sequencias;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 100
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

ll t, n, ans;
vector<ll> seq(100000, -1);

ll solve(ll x) {
    if(seq[x] >= 0) return seq[x];
    return seq[x] = solve(x-1) + x;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    seq[0] = 1;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = solve(n);
        cout << ans << "\n";
    }
}
