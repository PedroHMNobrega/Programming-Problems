//Pegadinha de Evergreen
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
    int n, j;
    string s1, s2, ans, blank;

    cin >> n;
    getline(cin, blank);
    while(n--) {
        getline(cin, s1);
        getline(cin, s2);
        ans = "";
        j = 0;
        for(int i = 0; i < s1.size(); i += 2) {
            ans += s1[i]; ans += s1[i+1];
            ans += s2[j];
            if((j + 1) < s2.size()) ans += s2[j+1];
            j += 2;
        }
        cout << ans << '\n';
    }
}
