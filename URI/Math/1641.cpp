//Restaurante e Pizzaria do Alfredo
//Assunto: Hypot/ Geometria;
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

int r, w, l, test = 1;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> r and r) {
        cin >> w >> l;
        r *= 2;
        if(hypot(w, l) <= r) printf("Pizza %d fits on the table.\n", test);
        else printf("Pizza %d does not fit on the table.\n", test);
        test++;
    }
}
