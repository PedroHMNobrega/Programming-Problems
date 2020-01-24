//Tabelas Hash:
//Assunto: Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, m, c, entra;
    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> m >> c;
        vector<int> chaves(c);
        map<int, vector<int>> hashT;
        for(int i = 0; i < c; i++) {
            cin >> entra;
            hashT[entra % m].push_back(entra);
        }

        for(int i = 0; i < m; i++) {
            cout << i << " -> ";
            if(hashT[i].empty()) {
                cout << "\\\n";
            } else {
                for(int j = 0; j < hashT[i].size(); j++) {
                    cout << hashT[i][j] << " -> ";
                } cout << "\\\n";
            }
        }
        if(test < n - 1) {
            cout << "\n";

        }
    }
}
