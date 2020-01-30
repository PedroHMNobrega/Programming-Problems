//HameKameKa
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
    int c, m1, m2, k, a1, a2, ans;
    string s, aux;
    size_t found;

    cin >> c;
    while(c--) {
        cin >> s;

        found = s.find('m');
        m1 = found;
        found = s.find('m', found+1);
        m2 = found;
        found = s.find('k');
        k = found;

        aux = s.substr(1, m1-1);
        a1 = aux.size();
        aux = s.substr(k+1, m2-(k+1));
        a2 = aux.size();
        ans = a1 * a2;
        cout << 'k';
        while(ans--) cout << 'a';
        cout << '\n';
    }
}
