//Triângulo Trinomial, a Vingança
//Assunto: Exponenciação Modular;
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
typedef long long int ll;
typedef pair<int, int> ii;

const int mod = pow(2, 31)-1;
int r;

int modPow(int x, int n, int m) {
    if(n == 0) return 1 % m;
    ll u = modPow(x, n/2, m);
    u = (u*u) % m;
    if(n % 2 == 1) u = (x * u) % m;
    return u;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> r;
    cout << modPow(3, r, mod) << "\n";
}
