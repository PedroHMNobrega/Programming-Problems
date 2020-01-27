//Festival das Noites Brancas
//Assunto: Ciclos de Fibonacci;
#include<bits/stdc++.h>
#include<stdlib.h>
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, num;
string s, sf;
vector<ll> f(1505, -1);

int fib(int x) {
    if(f[x] >= 0) return f[x];
    f[x] = (fib(x-1) + fib(x-2)) % 1000;
    return f[x];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    f[0] = 0; f[1] = 1; f[2] = 1;
    fib(1500);
    cin >> t;
    while(t--) {
        cin >> s;
        int ans = 0, ciclo = 1500;
        for (int i = 0; i < s.size(); i++) {
            ans *= 2;
            ans += (s[i] - '0');
            ans %= ciclo;
        }
        printf("%03d\n", f[ans]);
    }
}
