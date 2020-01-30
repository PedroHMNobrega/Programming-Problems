//Minha Senha Provisória
//Assunto: String/ Substring;
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
    int n, u0;
    string ra, ans;
    bool correct;

    cin >> n;
    while(n--) {
        cin >> ra;
        correct = true;
        if(ra.size() != 20) correct = false;
        if(ra[0] != 'R' or ra[1] != 'A') correct = false;
        u0 = 2;
        while(ra[u0] == '0') u0++;
        ans = ra.substr(u0, ra.size());
        if(!correct) cout << "INVALID DATA\n";
        else cout << ans << '\n';
    }
}
