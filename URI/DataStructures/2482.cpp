//Etiquetas de Noel
//Assunto: Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    string idioma, traducao, nome, blank;
    cin >> n;
    getline(cin, blank);
    map<string, string> trad;
    for(int i = 0; i < n; i++) {
        getline(cin, idioma);
        getline(cin, traducao);
        trad[idioma] = traducao;
    }
    cin >> m;
    getline(cin, blank);
    for(int i = 0; i < m; i++) {
        getline(cin, nome);
        getline(cin, idioma);
        cout << nome << "\n";
        cout << trad[idioma] << "\n\n";
    }
}
