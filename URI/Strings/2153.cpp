//Sanduicheiche
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

int solve(string s) {
    string aux;
    int j;
    aux = s[s.size()-1];
    loopBack(i, s.size()-2, 0) {
        if(s[i] == aux[0]) {
            j = i-1;
            loop(k, 1, aux.size()) {
                if(aux[k] != s[j]) break;
                j--;
                if(j < 0 or k == aux.size()-1) return i;
            }
        } else aux += s[i];
    }
    return s.size();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s, ans;
    int idx;

    while(cin >> s) {
        idx = solve(s);
        ans = s.substr(0, idx+1);
        cout << ans << '\n';
    }
}
