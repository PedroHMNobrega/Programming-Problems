//Operações em ABP I
//Assunto: Binary Search Tree
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string op;
char insere, procura;
vector<char> converte(60, '*');
int raiz, c;
vector<ii> adj(60, {0, 0});
vector<int> ordem;

void addNode(int add, int pai) {
    if(add < pai) {
        if(adj[pai].fi == 0) {
            adj[pai].fi = add;
            return;
        } else {
            addNode(add, adj[pai].fi);
        }
    } else {
        if(adj[pai].se == 0) {
            adj[pai].se = add;
            return;
        } else {
            addNode(add, adj[pai].se);
        }
    }
}

void imprimePre(int no) {
    ordem.pb(no);
    if(adj[no].fi != 0) imprimePre(adj[no].fi);
    if(adj[no].se != 0) imprimePre(adj[no].se);
}

void imprimeIn(int no) {
    if(adj[no].fi != 0) imprimeIn(adj[no].fi);
    ordem.pb(no);
    if(adj[no].se != 0) imprimeIn(adj[no].se);
}

void imprimePos(int no) {
    if(adj[no].fi != 0) imprimePos(adj[no].fi);
    if(adj[no].se != 0) imprimePos(adj[no].se);
    ordem.pb(no);
}

void printar() {
    loop(i, 0, ordem.size()) {
        if(i < ordem.size()-1) cout << converte[ordem[i]] << " ";
        else cout << converte[ordem[i]] << "\n";
    } ordem.clear();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> op >> insere;
    raiz = ((int)insere - 'A') + 1; 
    converte[raiz] = insere;
    while(cin >> op) {
        if(op == "PREFIXA") {
            imprimePre(raiz);
            printar();
        } else if(op == "INFIXA") {
            imprimeIn(raiz);
            printar();
        } else if(op == "POSFIXA") {
            imprimePos(raiz);
            printar();
        } else if(op == "P") {
            cin >> procura;
            c = ((int)procura - 'A') + 1;
            if(converte[c] == '*') cout << procura << " nao existe\n";
            else cout << procura << " existe\n";
        } else {
            cin >> insere;
            c = ((int)insere - 'A') + 1;
            converte[c] = insere;
            addNode(c, raiz);
        }
    }
}
