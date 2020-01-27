//Triangulação de Delaunay
//Assunto: Observar Brute Force
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
#define MOD 1000000009
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

double ans, l;
ll n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> l and l) {
        if(l >= 10000000) printf("1.000000\n");
        else {
            n = 3 + ((l-3) * 2);
            ans = (n - l) / (double)l;
            printf("%.6f\n", ans);
        }
    }
}
