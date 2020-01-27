//Fatorial
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
#define MAX 80000
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, test = 1; 
ll ans;
vector<int> f = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8, 8};

ll solve(ll x) {
    if(x <= 10) return f[x];
    if(x/10 % 2 == 1) return 4 * solve(x/5) * solve(x%10);
    else return 6 * solve(x/5) * solve(x%10);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n) {
        ans = solve(n);
        cout << "Instancia " << test << "\n";
        cout << ans%10 << "\n\n";
        test++;
    }
}
