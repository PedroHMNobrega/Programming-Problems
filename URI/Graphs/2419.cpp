//Costa
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int m, n, ans;
bool aux;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> m >> n;
    vector<string> mapa(m+1);
    loop(i, 0, m) {
        cin >> mapa[i];
    }
    loop(i, 0, m) {
        loop(j, 0, n) {
            aux = false;
            if(mapa[i][j] == '#') {
                if(j+1 >= n or j-1 < 0 or i+1 >= m or i-1 < 0) aux = true;
                else if(mapa[i][j+1] == '.' or mapa[i][j-1] == '.' or mapa[i+1][j] == '.' or mapa[i-1][j] == '.') aux = true;
                if(aux) ans++;
            }
        }
    }
    cout << ans << "\n";
}
