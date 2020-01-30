//Teclado Zoeiro
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
    int n, m;
    char e, s;
    map<char, char> changes;
    string linha, blank, ans;

    cin >> n >> m;
    while(n--) {
        cin >> e >> s;
        changes[e] = s;
        changes[s] = e;
    }
    getline(cin, blank);
    while(m--) {
        getline(cin, linha);
        ans = "";
        for(auto x : linha) {
            if(changes[x] != '\0') ans += changes[x];
            else ans += x;
        }
        cout << ans << '\n';
    }
}
