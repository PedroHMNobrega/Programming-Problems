//Subsequências:
//Assunto: String
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, q, j;
    string palavra, sub;

    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> palavra;
        cin >> q;
        for(int qr = 0; qr < q; qr++) {
            cin >> sub;
            j = 0;
            for(int i = 0; i < palavra.size(); i++) {
                if(palavra[i] == sub[j]) {
                    j++;
                }
            }
            if(j == sub.size()) {
                cout << "Yes\n";
            } else  {
                cout << "No\n";
            }
        }
    }
}
