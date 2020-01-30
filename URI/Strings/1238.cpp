//Combinador
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

int n, tam, i;
string s1, s2, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    while(n--) {
        cin >> s1 >> s2;
        tam = min(s1.size(), s2.size());
        i = 0;
        ans = "";
        while(tam--) {
            ans += s1[i];
            ans += s2[i];
            i++;
        }
        while(i < s1.size()) ans += s1[i++];
        while(i < s2.size()) ans += s2[i++];
        cout << ans << "\n";
    }
}
