//Conjuntos Bons e Ruins
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
    int n;
    size_t found;
    bool ans;
    
    while(cin >> n and n) {
        vector<string> palavras(n);
        loop(i, 0, n) cin >> palavras[i];
        sort(all(palavras));
        ans = true;
        loop(i, 0, palavras.size() - 1) {
            found = palavras[i+1].find(palavras[i]);
            if(found != string::npos and found == 0) ans = false;
        }
        if(ans) cout << "Conjunto Bom\n";
        else cout << "Conjunto Ruim\n";
    }
}
