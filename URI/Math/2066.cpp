//amelborP mU
//Assunto: Palindromos/ Math;
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

int k;
vector<ll> ans(19);

ll p(int x) {
    ll ans = 9;
    loop(i, 1, x/2) ans *= 10;
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ans[1] = 0;
    ans[2] = 36;
    loop(i, 3, 19) {
        if(i % 2 == 1) ans[i] = ans[i-1] * 10;
        else {
            ans[i] = ans[i-2] * 100;
            ans[i] += 45 * p(i-2);
        }
    }
    cin >> k;
    cout << ans[k] << "\n";
}
