//Grace Hopper, a Vovó do Cobol
//Assunto: String/ Find;
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
    string s, aux = "cobol";
    size_t found;
    bool ans;
    int j, x, ante;

    while(cin >> s) {
        vector<int> hifens;
        found = s.find('-');
        while(found != string::npos) {
            hifens.pb(found);
            found = s.find('-', found+1);
        }
        ans = false; j = 0;
        if(tolower(s[0]) == 'c') j++;
        else if(tolower(s[(hifens[0]-1)]) == 'c') j++;
        loop(i, 1, hifens.size()) {
            x = hifens[i];
            ante = hifens[i-1];
            if(tolower(s[ante+1]) == aux[j] or tolower(s[x-1]) == aux[j]) j++;
            else j = 0;
            if(j == 5) ans = true;
        }
        if(tolower(s[x+1]) == aux[j] or tolower(s[s.size()-1]) == aux[j]) j++;
        if(j == 5) ans = true;

        if(ans) cout << "GRACE HOPPER\n";
        else cout << "BUG\n";
    }
}
