//Números de Ahmoc
//Assunto: String/ Find;
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
    string a, s;
    int t = 1;
    bool ans, aux = false;

    while(cin >> a and a != "0") {
        if(aux) cout << "\n";
        aux = true;
        cin >> s;
        ans = false;
        size_t found = s.find(a);
        if(found != string::npos) ans = true;
        cout << "Instancia " << t << '\n';
        if(ans) cout << "verdadeira\n";
        else cout << "falsa\n";
        t++;
    }
}
