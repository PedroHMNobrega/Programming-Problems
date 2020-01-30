//LED
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

int n, ans;
string v;
map<char, int> leds;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    leds['0'] = 6; leds['1'] = 2; leds['2'] = 5; leds['3'] = 5; leds['4'] = 4; 
    leds['5'] = 5; leds['6'] = 6; leds['7'] = 3; leds['8'] = 7; leds['9'] = 6;
    cin >> n;
    while(n--) {
        cin >> v;
        ans = 0;
        for(auto x : v) ans += leds[x];
        cout << ans << " leds\n";
    }
}
