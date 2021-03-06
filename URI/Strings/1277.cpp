//Pouca Frequência
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
    int t, n, total, pre;
    double media;
    bool pri;
    string freq;

    cin >> t;
    while(t--) {
        cin >> n;
        pri = true;
        vector<string> nomes(n);
        loop(i, 0, n) cin >> nomes[i];
        loop(i, 0, n) {
            cin >> freq;
            total = pre = 0;
            for(auto x: freq) {
                if(x == 'P') pre++;
                if(x != 'M') total++;
            }
            media = 100 * pre / total;
            if(media < 75) {
                if(pri) cout << nomes[i];
                else cout << " " << nomes[i];
                pri = false;
            }
        } cout << "\n";
    }
}
