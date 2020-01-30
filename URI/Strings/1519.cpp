//Abreviações
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

vector<string> split(string s) {
    vector<string> p;
    string aux = "";
    bool start = false;
    loop(i, 0, s.size()) {
        if(i == 0 or s[i-1] == ' ') {
            start = true;
            aux += s[i];
        } else if(s[i] == ' ') {
            if(aux.size() > 0) p.pb(aux);
            aux = "";
            start = false;
        } else if(start) aux += s[i];
    }
    if(aux.size() > 0) p.pb(aux);
    return p;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string linha, ans;
    int total;

    while(getline(cin, linha) and linha != ".") {
        map<char, pair<string, int>> maiores;
        map<string, int> show;
        vector<string> palavras = split(linha);
        for(auto x: palavras) {
            if(x.size() > 2) show[x] += x.size()-2;
            else show[x] = -1;
        }
        for(auto x: palavras) {
            if(show[x] > maiores[x[0]].se) {
                maiores[x[0]] = {x, show[x]};
            }
        }
        ans = "";
        string x;
        loop(i, 0, palavras.size()) {
            x = palavras[i];
            if(x.size() > 2 and x == maiores[x[0]].fi) {
                ans += x[0]; 
                ans += '.';
            } else ans += x;
            if(i < palavras.size()-1) ans += ' ';
        }
        total = 0;
        for(auto x : maiores) if(x.se.fi.size() > 2) total++;
        cout << ans << '\n';
        cout << total << '\n';
        for(auto x : maiores) if(x.se.fi.size() > 2) cout << x.fi << ". = " << x.se.fi << '\n';
    }
}
