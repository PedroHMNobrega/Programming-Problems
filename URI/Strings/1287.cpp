//Processador Amigável de Inteiros
//Assunto: String;
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 1000005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int convert(string s) {
    if(s.size() == 0) return -1;
    ll num = 0;
    loop(i, 0, s.size()) {
        num *= 10;
        num += s[i] - '0';
        if(num > 2147483647) return -1;
    }
    return num;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s, ans;
    ll num;
    bool errado;

    while(getline(cin, s)) {
        ans = "";
        errado = false;
        for(auto x : s) {
            if(x == 'o' or x == 'O') ans += '0';
            else if(x == 'l') ans += '1';
            else if(isdigit(x)) ans += x;
            else if(x != ' ' and x != ',') errado = true;
        }

        num = convert(ans);
        if(num == -1 or errado) cout << "error\n";
        else cout << num << "\n";
    }
}
