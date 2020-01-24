//Ida à Feira:
//Assunto: Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, m, p, q;
    double v, total;
    string nome;

    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> m;
        map<string, double> frutas;
        total = 0;
        for(int p = 0; p < m; p++) {
            cin >> nome >> v;
            frutas[nome] = v;
        }
        cin >> p;
        for(int j = 0; j < p; j++) {
            cin >> nome >> q;
            total += frutas[nome] * q;
        }
        printf("R$ %.2f\n", total);
    }
}
