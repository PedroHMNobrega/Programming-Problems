//BIT Park
//Assunto: BIT
#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
#define MAX 2000010
using namespace std;

int bit[2][MAX + 10];
int n, e, x, gA, gB, pos, total, idx;
char evt;
string jg;
bool rnc;

void add(int time, int k, int v) {
    while(k < MAX) {
        bit[time][k] += v;
        k += k & -k;
    }
}
int sum(int time, int k) {
    int s = 0;
    while(k >= 1) {
        s += bit[time][k];
        k -= k & -k;
    } 
    return s;
}
int sum(int time, int l, int r) {
    return sum(time, r) - (l <= 1 ? 0 : sum(time, l - 1));
}

int nJogador(string s) {
    return stoi(s.substr(1)) - 1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> e, (n || e)) {
        memset(bit, 0, sizeof(bit));
        vector<int> timeA(n/2);
        vector<int> timeB(n/2);
        loop(i, 0, n/2) {
            cin >> timeA[i];
            timeA[i]++;
            add(0, timeA[i], 1);
        }
        loop(i, 0, n/2) {
            cin >> timeB[i];
            timeB[i]++;
            add(1, timeB[i], 1);
        }

        gA = 0; gB = 0;
        rnc = false;
        while(e--) {
            cin >> evt;
            if(evt == 'I' || evt == 'P') {
                cin >> jg;
                if(!rnc) {
                    if(evt == 'I') {
                        rnc = false;
                    }
                    if(jg[0] == 'A') {
                        pos = timeA[nJogador(jg)];
                        total = sum(1, pos+1, MAX);
                    } else if(jg[0] == 'B') {
                        pos = timeB[nJogador(jg)];
                        total = sum(0, 1, pos-1);
                    }
                    if(total < n / 11.0) {
                        rnc = true;
                    }
                }
            } else if(evt == 'M') {
                cin >> jg >> x;
                x++; //Pois ele da indexado de 0 e o BIT é indexado de 1
                idx = nJogador(jg);
                if(jg[0] == 'A') {
                    add(0, timeA[idx], -1);
                    timeA[idx] = x;
                    add(0, timeA[idx], 1);
                } else {
                    add(1, timeB[idx], -1);
                    timeB[idx] = x;
                    add(1, timeB[idx], 1);
                }
            } else if(evt == 'S') {
                rnc = false;
            } else {
                cin >> jg;
                if(!rnc) {
                    if(jg[0] == 'A') {
                        gB++;
                    } else {
                        gA++;
                    }
                }
                rnc = false;
            }
        }
        cout << gA << " X " << gB << "\n";
    }
}
