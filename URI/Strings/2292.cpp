//Painel LED
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
    int n;
    ll c, aux;
    string p;
    bool swtc;

    cin >> n;
    while(n--) {
        cin >> p >> c;
        vector<bool> status(p.size());
        loop(i, 0, p.size()) {
            if(p[i] == 'X') status[i] = false;
            else status[i] = true;
        }
        loop(i, 0, p.size()) {
            if(c % 2 == 0) swtc = false;
            else swtc = true;
            if(status[i]) c = ceil(c / 2.0);
            else c = c / 2.0;
            if(swtc) {
                if(status[i]) status[i] = false;
                else status[i] = true;
            }
            if(status[i]) cout << 'O';
            else cout << 'X';
        } cout << '\n';
    }
}
