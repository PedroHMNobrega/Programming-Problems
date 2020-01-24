//Altura
//Assunto: Ordenção
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nc, n;
    cin >> nc;
    for(int test = 0; test < nc; test++) {
        cin >> n;
        vector<int> alturas(n);
        for(int i = 0; i < n; i++) {
            cin >> alturas[i];
        }
        sort(alturas.begin(), alturas.end());
        for(int i = 0; i < n; i++) {
            if(i < n - 1) {
                cout << alturas[i] << " ";
            } else {
                cout << alturas[i] << "\n";
            }
        }
    }
}
