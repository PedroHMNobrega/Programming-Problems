//Criptografia
//Assunto: Manipulação de char/ ASCII;
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

int n, metade;
string s, blank;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    getline(cin, blank);
    while(n--) {
        vector<char> palavra;
        getline(cin, s);
        for(auto x: s) {
            if(isalpha(x)) palavra.pb(x + 3);
            else palavra.pb(x);
        }
        reverse(all(palavra));
        metade = s.size() / 2;
        loop(i, metade, s.size()) palavra[i] -= 1;
        for(auto x : palavra) cout << x;
        cout << "\n";
    }
}
