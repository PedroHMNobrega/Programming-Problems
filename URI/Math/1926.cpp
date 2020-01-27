//Marianne e os Primos Gêmeos
//Assunto: Sieve of Eratosthenes;
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
#define MAX 1000500
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int q, x, y, cnt;
vector<int> crivo(MAX, 0);
vector<int> twinPrimes(MAX);

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    loop(i, 2, MAX+1) {
        if(crivo[i]) continue;
        for(int j = 2*i; j <= MAX; j += i) crivo[j] = i;
    }
    crivo[0] = 2; crivo[1] = 2;
    loop(i, 2, MAX+1) {
        if(crivo[i] == 0 and (crivo[i+2] == 0 or crivo[i-2] == 0)) cnt++;
        twinPrimes[i] = cnt;
    }

    cin >> q;
    while(q--) {
        cin >> x >> y;
        if(x > y) swap(x, y);
        cout << twinPrimes[y] - twinPrimes[x-1] << "\n";
    }
}
