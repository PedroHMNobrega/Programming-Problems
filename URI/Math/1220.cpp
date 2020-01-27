//A Viagem
//Assunto: Ponto Flutuante;
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

int n, inteira, r;
double ans, soma2, soma3, soma;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(scanf("%d", &n) and n) {
        vector<int> gastos(n);
        soma = 0;
        loop(i, 0, n) {
            scanf("%d.%d", &inteira, &r);
            gastos[i] = inteira * 100 + r;
            soma += gastos[i];
        }
        soma /= n;
        soma2 = 0;
        soma3 = 0;
        loop(i, 0, n) {
            if(gastos[i] < soma) {
                soma3 += ((int)(soma - gastos[i])) / 100.0;
            }
            else if(soma < gastos[i]) {
                soma2 += ((int)(gastos[i] - soma))/100.0;
            } 
        } 
        ans = max(soma2, soma3);
        printf("$%.2f\n", ans);
    }
}
