//Ajude Girafales
//Assunto: Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ans, dif;
    string n1, n2;

    while(true) {
        cin >> n;
        ans = 0;
        map<string, string> nomes;
        if(n == 0) break;
        for(int i = 0; i < n; i++) {
            cin >> n1 >> n2;
            nomes[n1] = n2;
        }
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> n1 >> n2;
            dif = 0;
            for(int j = 0; j < n1.size(); j++) {
                if(nomes[n1][j] != n2[j]) {
                    dif++;
                }
            }
            if(dif > 1) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}
