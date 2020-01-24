//Pontos de Feno:
//Assunto: Map/ Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int m, n, s, salario;
    string nm, pl;
    map<string, int> job;
    
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        cin >> nm >> s;
        job[nm] = s;
    }
    for(int i = 0; i < n; i++) {
        salario = 0;
        while(true) {
            cin >> pl;
            if(pl[0] == '.') break;
            salario += job[pl];
        }
        cout << salario << "\n";
    }

}
