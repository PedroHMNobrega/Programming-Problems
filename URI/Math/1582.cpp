//O Teorema de Pitágoras
//Assunto: GCD/ Hypot;
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

int x, y, z;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> x >> y >> z) {
        if(x > y) swap(x, y); if(y > z) swap(y, z);
        if(__gcd(x, __gcd(y, z)) == 1 and hypot(x, y) == z) cout << "tripla pitagorica primitiva\n";
        else if(hypot(x, y) == z) cout << "tripla pitagorica\n";
        else cout << "tripla\n";
    }
}
