//Digitador Gago
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
    vector<string> v;
    bool start;
    string aux = "";
    loop(i, 0, s.size()) {
        if(i == 0 or s[i-1] == ' ') {
            start = true;
            aux += s[i];
        } else if(s[i] == ' ') {
            if(aux != "") v.pb(aux);
            aux = "";
        } else if(start) aux += s[i];
    }
    if(aux != "") v.pb(aux);
    return v;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string linha, p1, p2;
    vector<string> palavras, ans;

    getline(cin, linha);
    palavras = split(linha);
    for(auto x : palavras) {
        if(x.size() >= 4) {
            p1 = p2 = "";
            p1 += x[0]; p1 += x[1];
            p2 += x[2]; p2 += x[3];
            if(p1 == p2) ans.pb(x.substr(2, x.size()));
            else ans.pb(x);
        } else ans.pb(x);
    }
    loop(i, 0, ans.size()) {
        if(i < ans.size()-1) cout << ans[i] << " ";
        else cout << ans[i] << '\n';
    }
}
