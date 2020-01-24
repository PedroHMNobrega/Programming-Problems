//Parafusos e Porcas:
//Assunto: Upper e Lower bound/ Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, x, y, num, ini, fim;
    while(cin >> n) {
        vector<int> elementos;
        for(int l = 0; l < n; l++) {
            cin >> x >> y;
            for(int i = x; i <= y; i++) {
                elementos.push_back(i);
            }
        }
        sort(elementos.begin(), elementos.end());
        cin >> num;
        ini = lower_bound(elementos.begin(), elementos.end(), num) - elementos.begin();
        fim = upper_bound(elementos.begin(), elementos.end(), num) - elementos.begin() - 1;
        if(ini < elementos.size() and elementos[ini] == num) {
            cout << num << " found from " << ini << " to " << fim << "\n";
        } else {
            cout << num << " not found\n";
        }
    }
}
