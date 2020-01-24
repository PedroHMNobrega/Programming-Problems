//Lista Telefônica Econômica:
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans, sz;
    while(cin >> n) {
        vector<string> telefones(n);
        for(int i = 0; i < n; i++) {
            cin >> telefones[i];
        }
        sort(telefones.begin(), telefones.end());

        ans = 0;
        sz =  telefones[0].size();
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < sz; j++) {
                if(telefones[i - 1][j] == telefones[i][j]) {
                    ans++;
                } else {
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
}
