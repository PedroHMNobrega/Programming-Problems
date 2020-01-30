//Enigma
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
    string m, crib;
    int j, k = 0, ans = 0;

    cin >> m >> crib;
    j = crib.size();
    while(j <= m.size()) {
        loop(i, 0, crib.size()) {
            if(m[i+k] == crib[i]) break;
            if(i == crib.size()-1) ans++;
        }
        k++; j++;
    }
    cout << ans << "\n";
}
