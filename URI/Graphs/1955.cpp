//See World
//Assunto: Matriz de adjacência
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define MAX 50050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, nc, soma;
int matriz[1005][1005];

int emComum(int x) {
    int ans = 1, cnt, mini = INF;
    loop(i, 1, n+1) {
        if(i != x) {
            cnt = 0;
            loop(j, 1, n+1) {
                if(matriz[i][j] == 1 and matriz[x][j] == 1) cnt++;
            }
            ans = max(ans, cnt);
            if(cnt < mini) {
                mini = cnt;
                nc = i;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(i, 1, n+1) {
        loop(j, 1, n+1) {
            cin >> matriz[i][j];
        }
    }
    soma = emComum(1);
    soma += emComum(nc);
    if(soma >= n) cout << "Bazinga!\n";
    else cout << "Fail!\n";
}
