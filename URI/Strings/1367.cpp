//Ajude!
//Assunto: Map;
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
    int n, tempo, ans, s, p;
    char q;
    string status;

    while(cin >> n and n) {
        map<char, int> pontos;
        map<char, bool> correct;
        while(n--) {
            cin >> q >> tempo >> status;
            if(status == "incorrect") pontos[q] += 20;
            else {
                pontos[q] += tempo;
                correct[q] = true;
            }
        }
        p = 0; s = 0;
        for(auto x : pontos) {
            if(correct[x.fi]) {
                p += x.se;
                s++;
            }
        }
        cout << s << " " << p << "\n";
    }
}
