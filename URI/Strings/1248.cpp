//Plano de Dieta
//Assunto: Map/ String;
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

string dieta, cafe, almoco, blank;

string solve() {
    map<char, int> show;
    string ans;
    for(auto x : dieta) show[x]++;
    for(auto x : cafe) {
        if(show[x] == 0) return "CHEATER";
        show[x]--;
    }
    for(auto x : almoco) {
        if(show[x] == 0) return "CHEATER";
        show[x]--;
    }
    ans = "";
    for(auto x : show) if(x.se > 0) ans += x.fi;
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin >> n;
    getline(cin, blank);
    while(n--) {
        getline(cin, dieta); getline(cin, cafe); getline(cin, almoco);
        cout << solve() << "\n";
    }
}
