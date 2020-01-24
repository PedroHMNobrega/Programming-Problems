//Ilhas Isoladas
//Assunto: Set
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    set<string> c1;
    set<string> c2;
    string a, b, blank;
    while(true) {
        cin >> t;
        if(t == 0) break;
        for(int i = 0; i < t; i++) {
            cin >> a >> blank >> b;
            c1.insert(a);
            c2.insert(b);
        }
        if(c1.size() == c2.size() and c2.size() == t) {
            cout << "Invertible.\n";
        } else {
            if(c1.size() < t) {
                cout << "Not a function.\n";
            }
            else {
                cout << "Not invertible.\n";
            }
        }
        c1.clear();
        c2.clear();
    } 
}
