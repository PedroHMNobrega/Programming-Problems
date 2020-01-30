//Aliteração
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string linha;
    char ultimo, letra;
    int ans, aux;

    while(getline(cin, linha)) {
        ans = aux = 0; ultimo = '/0';
        loop(i, 0, linha.size()) {
            letra = tolower(linha[i]);
            if(i - 1 < 0 or linha[i-1] == ' ') {
                if(ultimo == '\0') ultimo = letra;
                else {
                    if(letra == ultimo) aux++;
                    else {
                        ultimo = letra;
                        if(aux > 0) {
                            ans++;
                            aux = 0;
                        }
                    }
                }
            }
        }
        if(aux > 0) ans++;
        cout << ans << "\n";
    }
}
