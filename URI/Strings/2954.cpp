//O Jogo
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
    int n, aux, maxi;
    string frase, blank;
    size_t found;

    cin >> n;
    getline(cin, blank);
    while(n--) {
        map<int, bool> stop;
        getline(cin, frase);
        loop(i, 0, frase.size()) frase[i] = tolower(frase[i]);

        found = frase.find("jogo");
        while(found != string::npos) {
            if(frase[found-1] == ' ' and (found+4 == frase.size() or frase[found+4] == ' ' or frase[found+4] == ',' or frase[found+4] == '.')) 
                stop[found+3] = true;
            found = frase.find("jogo", found+1);
        }
        found = frase.find("perdi");
        while(found != string::npos) {
            if(frase[found-1] == ' ' and (found+5 == frase.size() or frase[found+5] == ' ' or frase[found+5] == ',' or frase[found+5] == '.')) 
                stop[found+4] = true;
            found = frase.find("perdi", found+1);
        }

        aux = 0; maxi = 0;
        loop(i, 0, frase.size()) {
            if(isalpha(frase[i])) aux++;
            if(stop[i]) {
                maxi = max(maxi, aux);
                aux = 0;
            }
        }
        maxi = max(maxi, aux);
        cout << maxi << '\n';
    }
}
