//Contando Caracters
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
    string aux = "";
    bool start = false;
    loop(i, 0, s.size()) {
        if(i == 0 or s[i-1] == ' ') {
            start = true;
            aux += s[i];
        } else if(s[i] == ' ') {
            start = false;
            if(aux.size() > 0) v.pb(aux);
            aux = "";
        } else if(start) aux += s[i];
    }
    if(aux.size() > 0) v.pb(aux);
    return v;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string linha, maior;
    int maxi = 0;

    while(getline(cin, linha) and linha != "0") {
        vector<string> palavras = split(linha);
        vector<int> ans;
        for(auto x : palavras) {
            ans.pb(x.size());
            if(x.size() >= maxi) {
                maxi = x.size();
                maior = x;
            }
        }
        loop(i, 0, ans.size()) {
            if(i < ans.size()-1) cout << ans[i] << "-";
            else cout << ans[i] << '\n';    
        }
    }
    cout << '\n';
    cout << "The biggest word: " << maior << '\n';
}
