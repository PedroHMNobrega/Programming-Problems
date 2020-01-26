//Profit
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, custo, soma, ans, in;
    while(cin >> n) {
        cin >> custo;
        int array[n];
        
        for(int i = 0; i < n; i++) {
            cin >> in;
            array[i] = in - custo;
        }

        ans = 0;
        soma = 0;
        for(int i = 0; i < n; i++) {
            soma = max(array[i], soma + array[i]);
            ans = max(soma, ans);
        }
        cout << ans << "\n";
    }
}
