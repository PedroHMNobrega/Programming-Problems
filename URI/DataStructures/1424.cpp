//Problema Fácil de Rujia Liu?:
//Assunto: Map/Dicionário
#include<bits/stdc++.h>
using namespace std;

int main () {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, m, k, v, ele;
    while(cin >> n >> m) {
        map<int, vector<int>> elementos;
        for(int i = 0; i < n; i++) {
            cin >> ele;
            elementos[ele].push_back(i+1);
        }
        for(int i = 0; i < m; i++) {
            cin >> k >> v;
            if(elementos[v].size() >= k) {
                cout << elementos[v][k-1] << "\n";
            } else {
                cout << "0\n";
            }
        }
    }
}
