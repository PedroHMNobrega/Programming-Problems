//Diga-me a Frequência:
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

struct Elemento {
    int carh, freq;
}elementos[1009];

bool sorta(Elemento e1, Elemento e2) {
    if(e1.freq == e2.freq) {
        return e1.carh > e2.carh;
    } else {
        return e1.freq < e2.freq;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;
    int k, f;
    f = 0;
    while(cin >> s) {
        if(f != 0) {
            cout << "\n";
        }
        f++;
        map<char, int> dic;
        for(int i = 0; i < s.size(); i++) {
            dic[s[i]]++;
        }

        k = 0;
        for(auto x : dic) {
            elementos[k].freq = x.second;
            elementos[k].carh = (int)x.first;
            k++;
        }

        sort(elementos, elementos + k , sorta);

        for(int i = 0; i < k; i++) {
            cout << elementos[i].carh << " " << elementos[i].freq << "\n";
        }

    }
}
