//Alinhamento Lunar
//Assunto: MMC;
#include<bits/stdc++.h>
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
#define MAX 100
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int m, a, b, c;

int mmc(int a, int b, int c) {
    int x = a*b / __gcd(a, b);
    x = x*c / __gcd(x, c);
    return x;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> m) {
        cin >> a >> b >> c;
        cout << mmc(a, b, c) - m << "\n";
    }
}
