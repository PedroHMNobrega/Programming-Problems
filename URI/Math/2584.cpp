//Pentágono
//Assunto: Geometria/ Area Pentagono;
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

int t;
double h, h2, a, ans, co, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        co = sin(54*M_PI / 180.0) * n;
        h = cos(54*M_PI / 180.0) * n;
        a = co * h;
        ans = 2 * a;
        h2 = sqrt(pow(2*co, 2) - pow(n/2.0, 2));
        ans += (n * h2) / 2.0;
        printf("%.3f\n", ans);
    }
}
