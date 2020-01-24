//Jogando Cartas Fora:
//Assunto: Deque

#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int num;
    while(true) {
        cin >> num;
        if(num == 0) break;

        deque<int> cartas;
        vector<int> descart;
        int elimina, ultimo = num - 1;

        for(int i = num; i > 0; i--) {
            cartas.push_back(i);
        }

        while(cartas.size() > 1) {
            elimina = cartas[ultimo];
            ultimo--;
            cartas.pop_back();
            descart.push_back(elimina);

            elimina = cartas[ultimo];
            cartas.pop_back();
            cartas.push_front(elimina);
        }

        cout << "Discarded cards:";
        for(int i = 0; i < descart.size(); i++) {
            if(i < descart.size() - 1) {
                cout << " " << descart[i] << ",";
            } else {
                cout << " " << descart[i] << "\n";
            }
        }

        cout << "Remaining card: " << cartas[0] << "\n";
    }
}
