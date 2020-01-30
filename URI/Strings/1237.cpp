//Comparação de Substring
//Assunto: Substr, Find;
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

string s1, s2;
int i, j, k, ans;

int solve() {
    i = 0; j = s1.size();
    while(j) {
        while(i+j <= s1.size()) {
            size_t found = s2.find(s1.substr(i, j));
            if(found != string::npos) return j;
            i++;
        }
        i = 0; j--;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(getline(cin, s1)) {
        getline(cin, s2);
        ans = solve();
        if(ans == -1) cout << "0\n";
        else if(ans == 0) cout << "1\n";
       else cout << ans << "\n";
    }
}
