//Validador de Senhas
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
    string senha;
    bool ans, up, low, num;

    while(getline(cin, senha)) {
        ans = true;
        up = low = num = false;
        if(senha.size() < 6 or senha.size() > 32) ans = false;
        for(auto x : senha) {
            if(!isalnum(x)) ans = false;
            if(isdigit(x)) num = true;
            else if(isupper(x)) up = true;
            else if(islower(x)) low = true;
        }
        if(ans and up and low and num) cout << "Senha valida.\n";
        else cout << "Senha invalida.\n";
    }
}
