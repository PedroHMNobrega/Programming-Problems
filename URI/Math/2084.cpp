//Eleições
//Assunto: Porcentagem;
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
#define MAX 1000500
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, soma, maior, p10;
double p;
bool ans = false;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    vector<int> votos(n);
    loop(i, 0, n) {
        cin >> votos[i];
        soma += votos[i];
    }
    sort(rall(votos));
    p = votos[0] * 100.0 / soma;
    p10 = soma / 10;
    if(p >= 45) ans = true;
    if(p >= 40 and (votos[0] - votos[1]) >= p10) ans = true;
    if(votos[0] == votos[1]) ans = false;
    if(ans) cout << "1\n";
    else cout << "2\n";
}   
