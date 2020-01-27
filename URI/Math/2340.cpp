#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, maxI, d, c;
    double exp, maxNum;
    cin >> n;

    maxI = 0;
    maxNum = 0;
    for(int bac = 0; bac < n; ++bac) {
        cin >> d >> c;
        exp = c * log10(d);
        if(exp > maxNum) {
            maxNum = exp;
            maxI = bac;
        }
    }

    cout << maxI << "\n";
}