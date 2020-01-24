//Onde está o Mármore?:
//Usar lower_bound
#include <bits/stdc++.h>
using namespace std;

int m, consultas, elemento;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int j = 1;
    while(true) {
        cin >> m >> consultas;
        if(m == 0 and consultas == 0) break;

        int marmores[m];
        for(int i = 0; i < m; i++) {
            cin >> marmores[i];
        }
        sort(marmores, marmores + m);
        cout << "CASE# " << j << ":\n";
        for(int c = 0; c < consultas; c++) {
            cin >> elemento;
            auto primeiro = lower_bound(marmores, marmores + m, elemento) - marmores;
            if(primeiro < m && marmores[primeiro] == elemento) {
                cout << elemento << " found at " << primeiro + 1 << "\n";
            } else {
                cout << elemento << " not found\n";   
            }
        }
        j++;
    }   
}
