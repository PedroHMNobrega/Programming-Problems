//Guarda Costeira
//Assunto: Triangulo / Hipotenusa;
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

int d, vf, vg, dg, tf, tg;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> d >> vf >> vg) {
        dg = hypot(12, d);
        tf = 12 * 60 / vf;
        tg = dg * 60 / vg;
        if(tg <= tf) cout << "S\n";
        else cout << "N\n";

    }
}
