//Velocidade Média
//Assunto: Velocidade Média / String;
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

string s, v;
int vel;
ll aux, tempoAnte, tempoAtual, tempoAux;
double dist;
bool primeiro = true;

void printTimef(string s) {
    loop(i, 0, 8) printf("%c", s[i]);
}

ll convTime(string s) {
    ll hora, minuto, segundo;
    string h = "", m = "", seg = "";
    loop(i, 0, 8) {
        if(i <= 1) h += s[i];
        else if(i > 2 and i <= 4) m += s[i];
        else if(i > 5) seg += s[i];
    }
    hora = stoi(h);
    minuto = stoi(m) + (60*hora);
    segundo = stoi(seg) + (60 * minuto);
    return segundo;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(getline(cin, s)) {
        if(s.size() > 8) {
            if(primeiro) {
                tempoAtual = convTime(s);
                primeiro = false;
            } else {
                tempoAnte = tempoAtual;
                tempoAtual = convTime(s);
                aux = tempoAtual - tempoAnte;
                dist += vel * (aux / 3600.0);
            }
            v = "";
            loop(i, 9, s.size()) v += s[i];
            vel = stoi(v);
        } else if(primeiro) {
            printTimef(s);
            printf(" 0.00 km\n");
        } else {
            tempoAux = convTime(s);
            aux = tempoAux - tempoAtual;
            printTimef(s);
            printf(" %.2f km\n", (dist + (vel * (aux / 3600.0))));
        }
    }
}
