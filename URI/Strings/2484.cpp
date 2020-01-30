//Abracadabra
//Assunto: String/ Formatação;
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
    string s;
    int spaces;

    while(cin >> s) {
        vector<char> letras;
        for(auto x: s) letras.pb(x);
        spaces = 0;
        while(!letras.empty()) {
            loop(i, 0, spaces) cout << " ";
            loop(i, 0, letras.size()) {
                if(i < letras.size()-1) cout << letras[i] << " ";
                else cout << letras[i] << "\n";
            }
            letras.pop_back();
            spaces += 1;
        }
        cout << "\n";
    }
}
