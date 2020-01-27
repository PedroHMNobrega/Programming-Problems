//Base 32
//Assunto: Bases numericas;
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
#define MOD 1000000007
using namespace std;
typedef unsigned long long ll;
typedef pair<int, int> ii;

ll n;

char num(ll x) {
    char n;
    if(x <= 9) n = (char)('0' + x);
    else n = (char)('A' + (x-10));
    return n;
}

string solve(ll x) {
    string ans = "";
    ll m;
    if(x < 32) {
        ans = num(x);
    } else {
        while(x >= 32) {
            m = x % 32;
            ans += num(m);
            x /= 32;
        }
        ans += num(x);
    }
    reverse(all(ans));
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) cout << solve(n) << "\n";
    cout << 0 << "\n";
}
