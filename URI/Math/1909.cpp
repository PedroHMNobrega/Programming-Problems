//Ajude Kiko
//Assunto: MMC;
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
#define MAX 100005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, t, ans;
ll mmc, mmc2;
bool imp;
vector<ll> divT;

vector<ll> div(int x) {
    vector<ll> d;
    for(int i = 2; i <= x/2; i++) {
        if(x % i == 0) d.pb(i);
    }
    d.pb(x);
    return d;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> t and (n||t)) {
        vector<ll> tempos(n);
        vector<bool> show(MAX, false);
        imp = false;
        mmc = 1;
        loop(i, 0, n) {
            cin >> tempos[i];
            if(t % tempos[i] != 0) imp = true;
            mmc = mmc*tempos[i] / __gcd(mmc, tempos[i]);
            show[tempos[i]] = true;
        }
        if(imp) cout << "impossivel\n";
        else {
            divT = div(t);
            ans = -1;
            for(auto x : divT) {
                mmc2 = abs(mmc * x / __gcd(mmc, x));
                if(!show[x] and mmc2 == t) {
                    ans = x;
                    break; 
                }
            }
            if(ans == -1) cout << "impossivel\n";
            else cout << ans << "\n";
        }
    }
}
