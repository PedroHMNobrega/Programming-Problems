//Lista de Compras
//Assunto: Set
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string linha, blank, ans;
    cin >> n;
    getline(cin, blank);
    for(int i = 0; i < n; i++) {
        set<string> lista;
        getline(cin, linha);
        ans = "";
        for(int j = 0; j < linha.size(); j++) {
            if((j != 0 and linha[j] == ' ') or j == linha.size() - 1) {
                if(j == linha.size() - 1) {
                    ans += linha[j];
                }
                lista.insert(ans);
                ans = "";
            } else {
                ans += linha[j];
            }
        }
        for(auto x = lista.begin(); x != lista.end(); x++) {
            if(x != lista.begin()) {
                cout << " " << *x;
            } else {
                cout << *x;
            }
        } cout << "\n";
    }
}
