//Churras no Yuri
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, vali;
    string nome;
    vector<pair<int, string>> carnes;

    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> nome >> vali;
            carnes.push_back({vali, nome});
        }
        sort(carnes.begin(), carnes.end());
        for(int j = 0; j < carnes.size(); j++) {
            if(j < carnes.size() - 1) {
                cout << carnes[j].second << " ";
            } else {
                cout << carnes[j].second << "\n";
            }
        }
        carnes.clear();
    }
}
