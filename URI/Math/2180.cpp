//Viagem à Marte na Velocidade de Primo
//Assunto: Sieve of Erastosthenes;
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

int p, soma, cnt, h, d;
vector<int> sieve(MAX, 0);

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    for(int i = 2; i <= MAX; i++) {
        if(sieve[i]) continue;
        for(int j = i*2; j <= MAX; j += i) sieve[j] = i;
    }
    cin >> p;
    loop(i, p, MAX) {
        if(sieve[i] == 0) {
            soma += i;
            cnt++;
            if(cnt == 10) break;
        }
    }
    h = 60000000 / soma;
    d = h / 24;
    printf("%d km/h\n", soma);
    printf("%d h / %d d\n", h, d);
}
