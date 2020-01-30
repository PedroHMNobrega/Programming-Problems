//Concurso de Contos
//Assunto: String;
#include <bits/stdc++.h>
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
#define MAX 1000005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, l, c, chars, linhas, paginas;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> l >> c) {
        vector<string> palavras(n);
        loop(i, 0, n) cin >> palavras[i];
        chars = linhas = 0;
        paginas = 1;
        for(auto x : palavras) {
            if(x.size() + chars + 1 <= c+1) chars += x.size() + 1;
            else {
                chars = x.size()+1;
                linhas++;
                if(linhas > l) {
                    paginas++;
                    linhas = 1;
                }
            }
        }
        if(chars > 0) linhas++;
        if(linhas > l) paginas++;
        cout << paginas << "\n";
    }
}
