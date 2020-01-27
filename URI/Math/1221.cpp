//Primo Rápido
//Assunto: Numeros Primos   
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

int t, n;

bool isPrime(int x) {
    if(x == 1) return false;
    if(x == 2) return true;
    for(int i = 3; i * i <= x; i += 2) {
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        if(isPrime(n)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
}
