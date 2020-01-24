//Sort! Sort!! e Sort!!!:
//Assunto: Ordenação de Struct
#include <bits/stdc++.h>
using namespace std;

struct Modulo {
    int num, modl;
}modulo[100000];

bool crit(Modulo x, Modulo y) {
    if(x.modl != y.modl) {
        return x.modl < y.modl;
    } else {
        if(x.num % 2 == 0 and y.num % 2 != 0) {
            return false;
        } else if(x.num % 2 != 0 and y.num % 2 == 0) {
            return true;
        } else if(x.num % 2 != 0 and y.num % 2 != 0 ) {
            return x.num > y.num;
        } else if(x.num % 2 == 0 and y.num % 2 == 0 ) {
            return x.num < y.num;
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, m, entra;
    while(true) {
        cin >> n >> m;
        if(n == 0 and m == 0) {
            cout << n << " " << m << "\n";
            break;
        }
        for(int i = 0; i < n; i++) {
            cin >> entra;
            modulo[i].num = entra;
            modulo[i].modl = entra % m;

        }
        sort(modulo, modulo + n, crit);

        cout << n << " " << m << "\n";
        for(int j = 0; j < n; j++) {
            cout << modulo[j].num << "\n";
        }
    }
}
