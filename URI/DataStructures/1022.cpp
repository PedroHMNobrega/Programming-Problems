#include <bits/stdc++.h>
using namespace std;

int n, divisao;
int n1, d1, n2, d2;

int main() {
    //freopen("out.txt", "w", stdout);
    cin >> n;
    for(int test = 0; test < n; test++) {
        string conta[7];
        for(int i = 0; i < 7; i++) {
            cin >> conta[i];
        }
        n1 = stoi(conta[0]);
        d1 = stoi(conta[2]);
        n2 = stoi(conta[4]);
        d2 = stoi(conta[6]);

        if(conta[3] == "/") {
            n1 = n1 * d2;
            d1 = n2 * d1;
            divisao = __gcd(n1, d1);
            n2 = n1/divisao;
            d2 = d1/divisao;
            if(n2 < 0 and d2 < 0) {
                n2 = abs(n2);
                d2 = abs(n2);
            } else if(d2 < 0) {
                n2 *= -1;
                d2 *= -1;
            }
            cout << n1 << "/" << d1 << " = " << n2 << "/" << d2 << "\n";
        } else if(conta[3] == "*") {
            n1 = n1 * n2;
            d1 = d1 * d2;
            divisao = __gcd(n1, d1);
            n2 = n1/divisao;
            d2 = d1/divisao;
            if(n2 < 0 and d2 < 0) {
                n2 = abs(n2);
                d2 = abs(n2);
            } else if(d2 < 0) {
                n2 *= -1;
                d2 *= -1;
            }
            cout << n1 << "/" << d1 << " = " << n2 << "/" << d2 << "\n";

        } else if(conta[3] == "+") {
            n1 = (n1 * d2) + (n2 * d1);
            d1 = d1 * d2;
            divisao = __gcd(n1, d1);
            n2 = n1/divisao;
            d2 = d1/divisao;
            if(n2 < 0 and d2 < 0) {
                n2 = abs(n2);
                d2 = abs(n2);
            } else if(d2 < 0) {
                n2 *= -1;
                d2 *= -1;
            }
            cout << n1 << "/" << d1 << " = " << n2 << "/" << d2 << "\n";
        } else if(conta[3] == "-") {
            n1 = (n1 * d2) - (n2 * d1);
            d1 = d1 * d2;
            if(n1 == 0 or d1 == 0) {
                cout << 0 << "/" << d1 << " = " << 0 << "/" << 1 << "\n"; 
            } else {
                divisao = __gcd(n1, d1);
                n2 = n1/divisao;
                d2 = d1/divisao;
                if(n2 < 0 and d2 < 0) {
                    n2 = abs(n2);
                    d2 = abs(n2);
                } else if(d2 < 0) {
                    n2 *= -1;
                    d2 *= -1;
                }
                cout << n1 << "/" << d1 << " = " << n2 << "/" << d2 << "\n";

            }
        }
    }
}
/*
4
1 / 2 + 3 / 4
1 / 2 - 3 / 4
2 / 3 * 6 / 6
1 / 2 / 3 / 4*/
