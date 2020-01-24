//Fila do Supermercado
//Assunto: Fila
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, total, it, at, maxi = 0, frente;
    total = 0;
    cin >> n >> m;
    vector<int> tempof(n);
    vector<int> atendendo(n);
    vector<pair<int, int>> menores(n);
    queue<int> fila;

    for(int i = 0; i < n; i++) {
        cin >> tempof[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> it;
        fila.push(it);
    }
    for(int i = 0; i < n; i++) {
        if(!fila.empty()) {
            atendendo[i] = fila.front() * tempof[i];
            menores[i] = {atendendo[i], i};
            fila.pop();
        }
    }
    sort(menores.begin(), menores.end());
    maxi = menores[n-1].first;
    if(fila.empty()) {
        cout << maxi << "\n";
    } else {
        while(!fila.empty()) {
            frente = fila.front();
            fila.pop();
            atendendo[menores[0].second] += (frente * tempof[menores[0].second]);
            menores[0].first = atendendo[menores[0].second];
            sort(menores.begin(), menores.end());
        }
        maxi = menores[n-1].first;
        cout << maxi << "\n";
    }
}
