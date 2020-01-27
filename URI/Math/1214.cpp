//Acima da Média
//Assunto: Média;
#include<bits/stdc++.h>
#include<stdlib.h>
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

int c, n, acima;
double media, soma, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> c;
    while(c--) {
        cin >> n;
        vector<double> alunos(n);
        soma = 0;
        loop(i, 0, n) {
            cin >> alunos[i];
            soma += alunos[i];
        }
        media = soma / n;
        acima = 0; 
        loop(i, 0, n) {
            if(alunos[i] > media) acima++;
        }
        ans = (acima * 100.0) / n;
        printf("%.3f%%\n", ans);
    }
}
