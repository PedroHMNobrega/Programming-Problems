//Balanço de Parênteses I:
//Assunto: Stack
#include <bits/stdc++.h>
using namespace std;

int verifica(string exp) {
    stack<char> pilha;
        for(int i = 0; i < exp.size(); i++) {
            if(exp[i] == '(') {
                pilha.push(exp[i]);
            } else if(exp[i] == ')') {
                if(pilha.empty()) return 0;
                else pilha.pop();
            }
        }
        if(pilha.empty()) return 1;
        else return 0;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string exp;
    while(cin >> exp) {
        if(verifica(exp) == 1) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }
}
