//Rede de Fibra
//Assunto: Set/ FloydWarshall/ BitMask
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 250
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, a, b, s1, ans;
string s;
int dist[MAX][MAX];
int adj[MAX][MAX];

void floydWarshall() {
    loop(k, 1, n+1) {
        loop(i, 1, n+1) {
            loop(j, 1, n+1) {
                dist[i][j] = dist[i][j] | (dist[i][k] & dist[k][j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        memset(adj, 0, sizeof(adj));
        while(cin >> a >> b and (a||b)) {
            cin >> s;
            s1 = 0;
            loop(i, 0, s.size()) s1 |= (1<<(s[i] - 'a'));
            adj[a][b] = s1;
        }
        loop(i, 1, n+1) {
            loop(j, 1, n+1) {
                if(adj[i][j] > 0) dist[i][j] = adj[i][j];
                else dist[i][j] = 0;
            }
        }
        floydWarshall();
        while(cin >> a >> b and (a||b)) {
            ans = dist[a][b];
            if(ans == 0) cout << "-";
            else loop(i, 0, 26) if(ans & (1<<i)) cout << (char)(i + 'a');
            cout << "\n";  
        } cout << "\n";
    }
}
