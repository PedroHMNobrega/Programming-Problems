//Composição de Jingles
//Assunto: Map/Dicionário
#include<bits/stdc++.h>
using namespace std;

int main () {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string ent;
    double soma;
    int ans;
    map<char, double> notas;
    notas['W'] = 1, notas['H'] = 0.5, notas['Q'] = 0.25, notas['E'] = 0.125, notas['S'] = 0.0625, notas['T'] = 0.03125 , notas['X'] = 0.015625;

    while(true) {
        cin >> ent;
        if(ent == "*") break;
        vector<string> comp;
        soma = 0;
        ans = 0;
        for(int i = 0; i < ent.size(); i++) {
            if(ent[i] == '/') {
                if(soma == 1) {
                    ans++;
                }
                soma = 0;
            } else {
                soma += notas[ent[i]];
            }
        }
        cout << ans << "\n";
    }
}
