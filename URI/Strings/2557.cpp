//R+L=J
//Assunto: String/ Find/ Substring;
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
    string s, r, l, j;
    int v1, v2, ans, mais, igual;
    size_t found;

    while(cin >> s) {
        found = s.find('+');
        mais = found;
        found = s.find('=');
        igual = found;

        r = s.substr(0, mais);
        l = s.substr(mais+1, igual);
        j = s.substr(igual+1, s.size());

        if(j == "J") ans = stoi(r) + stoi(l);
        else if(r == "R") ans = stoi(j) - stoi(l);
        else ans = stoi(j) - stoi(r);
        cout << ans << '\n';
    }
}
