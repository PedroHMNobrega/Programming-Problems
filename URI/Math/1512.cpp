//Azulejos
//Assunto: MMC 
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

int n, a, b, v1, v2, v3;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> a >> b and (n||a||b)) {
        v1 = n / a;
        v2 = n / b;
        v3 = n / (a * b / __gcd(a, b));
        cout << (v1 + v2) - v3 << "\n";
    }
}
