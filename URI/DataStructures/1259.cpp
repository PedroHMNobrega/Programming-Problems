//Pares e Ímpares:
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, ele;
    vector<int> pares;
    vector<int> impares;
    cin >> n;
    for(int ent = 0; ent < n; ent++) {
        cin >> ele;
        if(ele % 2 == 0) {
            pares.push_back(ele);
        } else {
            impares.push_back(ele);
        }
    }

    sort(pares.begin(), pares.end());
    sort(impares.rbegin(), impares.rend());
    if(!pares.empty()) {
        for(int i = 0; i < pares.size(); i++) {
            cout << pares[i] << "\n";
        }
    }
    if(!impares.empty()) {
        for(int i = 0; i < impares.size(); i++) {
            cout << impares[i] << "\n";
        }
    }
}
