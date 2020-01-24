//Fila do Recreio
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, m, nota, ans;

    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> m;
        vector<int> notas(m);
        vector<int> notasSort(m);
        for(int nt = 0; nt < m; nt++) {
            cin >> nota;
            notas[nt] = nota;
            notasSort[nt] = nota;
        }
        sort(notasSort.rbegin(), notasSort.rend());
        ans = 0; 
        for(int i = 0; i < m; i++) {
            if(notas[i] == notasSort[i]) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}
