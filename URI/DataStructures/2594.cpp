//Eachianos II
//Assunto: String
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int qp, k, ans;
    string palavra, buscar, blank;

    cin >> qp;
    getline(cin, blank);
    for(int i = 0; i < qp; i++) {
        getline(cin, palavra);
        cin >> buscar;
        getline(cin, blank);
        k = 0;
        vector<int> respostas;
        for(int j = 0; j < palavra.size(); j++) {
            if(k == buscar.size()-1 and palavra[j] == buscar[k] and (j == palavra.size() - 1 or palavra[j+1] == ' ')) {
                respostas.push_back(ans);
                k = 0;
            } else if(k > 0 and palavra[j] == buscar[k]) {
                k++;
            } else if((j == 0 or palavra[j-1] == ' ') and palavra[j] == buscar[k]) {
                k++;
                ans = j;
            } else {
                k = 0;
            }
        }
        if(respostas.size() == 0) {
            cout << "-1\n";
        }
        else {
            for(int j = 0; j < respostas.size(); j++) {
                if(j < respostas.size() - 1) {
                    cout << respostas[j] << " ";
                } else {
                    cout << respostas[j] << "\n";
                }
            } 
        }
    }
}
