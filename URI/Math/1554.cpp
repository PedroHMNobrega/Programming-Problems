//Bilhar N+1
//Assunto: Distância entre dois pontos;
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

int t, n, x, y, xb, yb, ans, mini, d;

int dist(int x, int y) {
    x *= 100;
    y *= 100;
    return hypot(xb - x, yb - y);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        mini = INF;
        cin >> n;
        cin >> xb >> yb;
        xb *= 100; yb *= 100;
        loop(i, 1, n+1) {
            cin >> x >> y;
            d = dist(x, y);
            if(d < mini) {
                mini = d;
                ans = i;
            }
        }
        cout << ans << "\n";
    }
}
