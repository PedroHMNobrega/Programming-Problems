//Van
//Assunto: Ordenação de Struct
#include <bits/stdc++.h>
using namespace std;

struct Aluno {
    string nome;
    char regiao;
    int dist;
} alunos[100005];

bool crit(Aluno a1, Aluno a2) {
    if(a1.dist == a2.dist) {
        if(a1.regiao == a2.regiao) {
            return a1.nome < a2.nome;
        } else {
            return a1.regiao < a2.regiao;
        }
    } else {
        return a1.dist < a2.dist;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    while(cin >> q) {
        for(int i = 0; i < q; i++) {
            cin >> alunos[i].nome >> alunos[i].regiao >> alunos[i].dist;
        }
        sort(alunos, alunos + q, crit);
        for(int j = 0; j < q; j++) {
            cout << alunos[j].nome << "\n";
        }
    }
}
