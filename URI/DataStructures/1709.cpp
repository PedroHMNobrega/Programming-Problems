//Baralho Embaralhado
//Assunto: Matemática
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int p, i, metade, ans, e;
    cin >> p;
    metade = p / 2;
    ans = 1;
    i = 1;
    while(i != metade + 1) {
        if(i <= metade) {
            i = ((i - 1) * 2) + 2;
        } else {
            e = i - (p / 2);
            i = (e * 2) - 1;
        }
        ans++;
    }
    cout << ans << "\n";

}
