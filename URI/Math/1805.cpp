//Soma Natural
//Assunto: Soma Dos Termos PA;
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
typedef unsigned long long ll;
typedef pair<int, int> ii;

ll a, b, ans;

ll solve(ll a, ll b) {
    return ((a + b) * (1+b-a) / 2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> a >> b;
    ans = solve(a, b);
    cout << ans << "\n";
}
