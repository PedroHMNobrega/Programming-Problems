//Atalhos Bloggo
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

string linha, ans, itI = "<i>", itF = "</i>", nI = "<b>", nF = "</b>";
bool it, ng;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(getline(cin, linha)) {
        ans = ""; it = ng = false;
        for(auto x : linha) {
            if(x == '_') {
                if(!it) {
                    ans += itI;
                    it = true;
                } else {
                    ans += itF;
                    it = false;
                }
            } else if(x == '*') {
                if(!ng) {
                    ans += nI;
                    ng = true;
                } else {
                    ans += nF;
                    ng = false;
                }
            } else ans += x;
        }
        cout << ans << "\n";
    }
}
