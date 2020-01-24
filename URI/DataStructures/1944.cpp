//BRINDE FACE 2015
//Assunto: Stack
#include <bits/stdc++.h>
using namespace std;

bool veri(string s1, string s2) {
    int j = 3;
    for(int i = 0; i < 4; i++) {
        if(s1[i] != s2[j]) return false;
        j--;
    }
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans;
    stack<string> letras;
    char lt;
    string nome;

    cin >> n;
    ans = 0;
    for(int i = 0; i < n; i++) {
        nome = "";
        for(int j = 0; j < 4; j++) {
            cin >> lt;
            nome += lt;
        }
        if(letras.empty()) {
            letras.push("FACE");
        } 
        if(veri(nome, letras.top())) {
            ans++;
            letras.pop();
        } else {
            letras.push(nome);
        }
    }
    cout << ans << "\n";
}
