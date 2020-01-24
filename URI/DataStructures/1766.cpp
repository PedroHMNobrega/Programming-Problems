//O Elfo das Trevas
//Assunto: Ordenação de Struct
#include <bits/stdc++.h>
using namespace std;

struct Renas {
    string nome;
    int peso, idade;
    double altura;
} renas[1005];

bool crit(Renas r1, Renas r2) {
    if(r1.peso == r2.peso) {
        if(r1.idade == r2.idade) {
            if(r1.altura == r2.altura) {
                return r1.nome < r2.nome;
            } else {
                return r1.altura < r2.altura;
            }
        } else {
            return r1.idade < r2.idade;
        }
    } else {
        return r1.peso > r2.peso;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t, n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {
        cin >> n >> m;
        for(int r = 0; r < n; r++) {
            cin >> renas[r].nome >> renas[r].peso >> renas[r].idade >> renas[r].altura;
        }
        sort(renas, renas + n, crit);
        printf("CENARIO {%d}\n", test+1);
        for(int i = 0; i < m; i++) {
            cout << i+1 << " - " << renas[i].nome << "\n";
        }
    }
}
