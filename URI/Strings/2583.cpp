//Chirrin Chirrion
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
    int c, n;
    string s1, s2, blank;

    cin >> c;
    while(c--) {
        cin >> n;
        map<string, bool> pediu;
        while(n--) {
            cin >> s1 >> s2;
            if(s2 == "chirrin") pediu[s1] = true;
            else if(s2 == "chirrion") pediu[s1] = false;
        }
        cout << "TOTAL\n";
        for(auto x: pediu) if(x.se) cout << x.fi << '\n'; 
        
    }
}
