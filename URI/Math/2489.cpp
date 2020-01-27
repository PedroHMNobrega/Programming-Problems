//Flecha no Coelho
//Assunto: Trigonometria;
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

double a, d, r, ans, y;
bool alto;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> a >> d >> r) {
        if(r >= 90) alto = true;
        else alto = false;
        r = abs(r - 90);
        y = tan((r * M_PI) / 180) * d;
        if(alto) ans = a + y;
        else ans = a - y;
        printf("%.4f\n", ans);
    }
}
