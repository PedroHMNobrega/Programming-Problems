//Gerando Permutações Ordenadas Rapidamente:
//Assunto: Set/ BackTracking
#include<bits/stdc++.h>
using namespace std;

set<string> perms;

void permut(string s, int size, bitset<10> bs, int veri, string ans) {
    if(veri == 0) {
        perms.insert(ans);
    } else {
        for(int i = 0; i < size; i++) {
            string ante = ans;
            if(bs[i] == 0) {
                ans += s[i];
                bs[i] = 1;
                permut(s, size, bs, veri-1, ans);
                ans = ante;
                bs[i] = 0;
            }
        }
    }

}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, siz;
    string s, palavra;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        siz = s.size();
        bitset<10> bs;

        if(siz == 1) {
            cout << s << "\n\n";
        } else {
            permut(s, siz, bs, siz, "");
            for(auto x : perms) {
                cout << x << "\n";
            } cout << "\n";
        }
        perms.clear();
    }
}
