//Leitura Múltipla
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
    string s;
    int p, ans, aux;
    char x;

    while(cin >> s) {
        cin >> p;
        ans = 0; aux = 0;
        loop(i, 0, s.size()) {
            x = s[i];
            if(x == 'R') {
                if(i + 1 == s.size() or s[i+1] == 'W') ans++;
                else {
                    aux++;
                    if(aux == p) {
                        ans++;
                        aux = 0;
                    }
                }
            } else {
                ans++;
                aux = 0;
            }
        }
        cout << ans << "\n";
    }
}
