//De Dentro para Fora
//Assunto: Split and Reverse String;
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

int n, metade;
string sen, blank, s1, s2;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    getline(cin, blank);
    while(n--) {
        getline(cin, sen);
        metade = sen.size() / 2;
        s1 = sen.substr(0, metade);
        s2 = sen.substr(metade, metade);
        reverse(all(s1)); reverse(all(s2));
        cout << s1 << s2 << "\n";
    }
}
