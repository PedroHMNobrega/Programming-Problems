//A Única Chance
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, cnt;
    char l;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        vector<char> letras(m);
        vector<char> letrasOrd(m);
        vector<int> idx;
        cnt = 0;
        for(int j = 0; j < m; j++) {
            cin >> l;
            letras[j] = l;
            letrasOrd[j] = l;
        }
        sort(letrasOrd.begin(), letrasOrd.end());
        for(int j = 0; j < m; j++) {
            if(letras[j] != letrasOrd[j]) {
                cnt++;
                idx.push_back(j);
            }
        }
        if(cnt > 2) {
            cout << "There aren't the chance.\n";
        } else {
            swap(letras[idx[0]], letras[idx[1]]);
            if(letras[idx[0]] == letrasOrd[idx[0]]) {
                cout << "There are the chance.\n";
            } else {
                cout << "There aren't the chance.\n";
            }   
        }
    }
}
