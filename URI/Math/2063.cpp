//Caçando Digletts
//Assunto: MMC / Grafo;
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

int n, mmc;
set<int> tempo;

int percurso(int x, vector<int> buracos) {
    int cnt = 0, i = x;
    while(buracos[i] != x) {
        i = buracos[i];
        cnt++;
    }
    return ++cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    vector<int> buracos(n+1);
    loop(i, 1, n+1) cin >> buracos[i];
    loop(i, 1, n+1) tempo.insert(percurso(i, buracos));
    for(auto x: tempo) {
        if(mmc == 0) mmc = x;
        else mmc = mmc*x / __gcd(mmc, x);
    }
    cout << mmc << "\n";   
}
