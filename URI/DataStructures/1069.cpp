//Diamantes e Areia:
//Assunto: Stack
#include <bits/stdc++.h>
using namespace std;

int e;

int verifica(string s) {
    stack<char> pilha;
    int total = 0;
    for(int i = 0; i < s.size(); i++) {
        e = s[i];
        if(e == '<') {
            pilha.push(e);
        } else if(e == '>'){
            if(!pilha.empty() and pilha.top() == '<') {
                pilha.pop();
                total++;
            }
        }
    }
    return total;
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n, ans;
    string s;

    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> s;
        ans = verifica(s);
        cout << ans << "\n";
    }
}
