//Ô, Que Tanto de Filme!
//Assunto: Lista
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    
    int n, max, cnt;
    string blank;
    vector<int> cat = {0, 0, 0, 0};

    cin >> n;
    getline(cin, blank);
    for(int i =0; i < n; i++) {
        vector<string> palpites(4);
        vector<string> win(4);
        getline(cin, blank);
        getline(cin, palpites[0]);
        getline(cin, palpites[1]);
        getline(cin, palpites[2]);
        getline(cin, palpites[3]);

        getline(cin, blank);
        getline(cin, win[0]);
        getline(cin, win[1]);
        getline(cin, win[2]);
        getline(cin, win[3]);
        for(int i = 0; i < 4; i++) {
            if(win[i] != palpites[i]) {
                cat[i]++;
            }
        }
    }
    max = 0;
    cnt = 1;
    for(int i = 0; i < 4; i++) {
        if(cat[i] > max) {
            max = cat[i];
            cnt = 1;
        } else if(cat[i] == max) {
            cnt++;
        }
    }

    for(int i = 0; i < 4; i++) {
        if(cat[i] == max) {
            if(cnt > 1 and i < 3) {
                cout << i + 1 << " ";
                cnt--;
            } else {
                cout << i + 1 << "\n";
            }
        }
    }
}
