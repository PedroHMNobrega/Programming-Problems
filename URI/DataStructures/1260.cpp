//Espécies de Madeira:
//Assunto: Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int n;
double perc, total;
int flag = 0;
string arv, w;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    getline(cin, w);
    for(int test = 0; test <= n; test++) {
        if(flag >= 2){
            cout << "\n";
        }
        flag++;
        map<string, int> arvores;
        total = 0;
        while(getline(cin, arv) && arv.length() > 0) {
            arvores[arv]++;
            total++;
        }
        for(auto it = arvores.begin(); it != arvores.end(); it++) {
            perc = (it->second * 100) / total;
            cout << it->first << " ";
            printf("%.4f\n", perc);
        }
    }
}
