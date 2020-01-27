//Desenhando Labirintos
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = b; i >= a; i--)
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, ini, v, a, v1, v2, ans, a2;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        map<ii, int> ap;
        ans = 0; a2 = 0;
        cin >> ini;
        cin >> v >> a;
        loop(i, 0, a) {
            cin >> v1 >> v2;
            if(v1 < v2) swap(v1, v2);
            if(ap[{v1, v2}] == 0) {
                a2++;
                ap[{v1, v2}]++;
            }
        }
        ans = min((v-1) * 2, a2 * 2);
        cout << ans << "\n";
    }
}
