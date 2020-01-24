//Amigos do Habay
//Assunto: Set/Ordenação
#include <bits/stdc++.h>
using namespace std;

bool rest(pair<string, int> s1, pair<string, int> s2) {
    if(s1.first.size() == s2.first.size()) {
        return s1.second < s2.second;
    } else {
        return s1.first.size() > s2.first.size();
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int idx = 0;
    string nome, op, win;
    set<string> conc;
    vector<pair<string, int>> participantes;
    set<string> out;
    while(true) {
        cin >> nome;
        if(nome == "FIM") break;
        cin >> op;
        if(op == "YES") {
            conc.insert(nome);
            participantes.push_back({nome, idx});
            idx++;
        } else {
            out.insert(nome);
        }
    }
    sort(participantes.begin(), participantes.end(), rest);
    win = participantes[0].first;
    for(auto x: conc) {
        cout << x << "\n";
    } 
    for(auto x: out) {
        cout << x << "\n";
    } cout << "\n";
    cout << "Amigo do Habay:\n";
    cout << win << "\n";
}
