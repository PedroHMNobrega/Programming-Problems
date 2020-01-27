//Pro Habilidade
//Assunto: Fibonacci/ Pow;
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

int n, cnt;
vector<ll> f(100, -1);
vector<string> ans(45);
ll n1, n2, d;
string s;

ll fib(int x) {
    if(f[x] >= 0) return f[x];
    return f[x] = fib(x-1) + fib(x-2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[0] = 1; f[1] = 1; f[2] = 2;

    while(cin >> n) {
        n1 = fib(n+1);
        n2 = pow(2, n);
        d = __gcd(n1, n2);
        n1 /= d; n2 /= d;
        cout << n1 << "/" << n2 << "\n";
    }
}
