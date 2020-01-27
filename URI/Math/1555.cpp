//Funções
//Assunto: Math;
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
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, x, y;
double r, b, c;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    while(n--) {
        cin >> x >> y;
        r = pow(3*x, 2) + pow(y, 2);
        b = 2 * pow(x, 2) + pow(5*y, 2);
        c = -100*x + pow(y, 3);
        if(r > b and r > c) cout << "Rafael ganhou\n";
        else if(b > r and b > c) cout << "Beto ganhou\n";
        else cout << "Carlos ganhou\n";
    }
}
