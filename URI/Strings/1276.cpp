//Faixa de Letras
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s, aux;
    char primeiro;
    int atual, ultimo;

    while(getline(cin, s)) {
        set<char> letras;
        vector<string> ans;
        for(auto x: s) if(isalpha(x)) letras.insert(x);
        ultimo = -1;
        for(auto x : letras) {
            atual = x - 'a';
            if(ultimo == -1) {
                primeiro = x;
                ultimo = atual;
            } 
            else if(atual == ultimo+1) ultimo = atual;
            else {
                aux = primeiro;
                aux += ':';
                aux += ultimo + 'a';
                ans.pb(aux);
                primeiro = x;
                ultimo = atual;
            }
        }
        if(!letras.empty()) {
            aux = primeiro;
            aux += ':';
            aux += ultimo + 'a';
            ans.pb(aux);
        }
        if(ans.empty()) cout << "\n";
        else {
            loop(i, 0, ans.size()) {
                if(i < ans.size()-1) cout << ans[i] << ", ";
                else cout << ans[i] << "\n";
            }
        }
    }
}
