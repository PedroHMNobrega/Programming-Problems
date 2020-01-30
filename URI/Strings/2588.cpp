//Jogo dos Palíndromos
//Assunto: String/ Palindromos;
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
    int ans, imp;

    while(cin >> s) {
        map<char, int> show;
        for(auto x: s) show[x]++;
        imp = 0;
        for(auto x: show) if(x.se % 2 != 0) imp++;
        if(imp == 0) ans = 0;
        else ans = imp - 1;
        cout << ans << '\n';
    }
}
