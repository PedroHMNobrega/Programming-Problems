//Oráculo de Alexandria
//Assunto: Fatorial/ Recursividade;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), xrend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 100005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, num, k;
ll ans;
string s, aux;

ll fat(int x, int k) {
    if(x <= 1) return 1;
    return x * fat(x - k, k);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    while(n--) {
        cin >> s;
        aux = s[0];
        if(isdigit(s[1])) aux += s[1];
        if(isdigit(s[2])) aux += s[2];
        k = s.size() - aux.size();
        num = stoi(aux);
        ans = fat(num, k);
        cout << ans << "\n";
    }
}
