//Super Primos: Ativar!
//Assunto: Sieve of Erasthosthenes;
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

int n;
vector<int> sieve(MAX, 0);
string aux;
bool super;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    sieve[0] = -1; sieve[1] = -1;
    for(int i = 2; i < MAX; i++) {
        if(sieve[i]) continue;
        for(int j = 2*i; j < MAX; j += i) sieve[j] = i;
    }
    while(cin >> n) {
        if(sieve[n] != 0) cout << "Nada\n";
        else {
            aux = to_string(n);
            super = true;
            for(auto x : aux) 
                if(sieve[x-'0'] != 0) 
                    super = false;
            if(super) cout << "Super\n";
            else cout << "Primo\n";
        }
    }
}
