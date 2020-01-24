//Estacionamento Linear
//Assunto: Stack
#include<bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, k, c, s, total;
    bool passou;
    while(true) {
        passou = true;
        cin >> n >> k;
        vector<pair<int, int>> fim(n);
        stack<pair<int, int>> estacionamento;
        if(n == 0 and k == 0) break;
        for(int i = 0; i < n; i++) {
            cin >> c >> s;
            fim[i] = {c, s};
        }
        sort(fim.begin(), fim.end());
        for(int i = 0; i < n; i++) {
            while(!estacionamento.empty() and estacionamento.top().second <= fim[i].first) {
                estacionamento.pop();
            }
            if(estacionamento.empty()) {
                estacionamento.push(fim[i]);
            } else {
                if(estacionamento.top().second < fim[i].second or estacionamento.size() >= k) {
                    passou = false;
                    break;
                } else {
                    estacionamento.push(fim[i]);
                }
            }
        }
        if(passou) {
            cout << "Sim\n";
        } else {
            cout << "Nao\n";
        }

    }
}
