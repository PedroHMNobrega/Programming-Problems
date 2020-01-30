//OBI URI
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
    int n;
    string s;

    cin >> n;
    vector<string> ans;
    while(n--) {
        cin >> s;
        if(s.size() == 3 and s[0] == 'O' and s[1] == 'B') ans.pb("OBI");
        else if(s.size() == 3 and s[0] == 'U' and s[1] == 'R') ans.pb("URI");
        else ans.pb(s);
    }
    loop(i, 0, ans.size()) {
        if(i < ans.size()-1) cout << ans[i] << " ";
        else cout << ans[i] << "\n";
    }
}
