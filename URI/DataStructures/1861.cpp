//O Hall dos Assassinos
//Assunto:  Map/Dicionário
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0); cin.tie(0);

    string nomeA, nomeM;
    map<string, int> mortes;
    vector<string> morreram;
    while(cin >> nomeA >> nomeM) {
        mortes[nomeA]++;
        morreram.push_back(nomeM);
    }
    for(int i = 0; i < morreram.size(); i++) {
        mortes[morreram[i]] = 0;
    }
    cout << "HALL OF MURDERERS\n";
    for(auto x : mortes) {
        if(x.second != 0) {
            cout << x.first << " " << x.second << "\n";
        }
    }
}
