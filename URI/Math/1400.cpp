//Jogo - Contando
//Assunto: Math;
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
#define MAX 100005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m , k, x, i, ans, cnt, w;
bool ordem;

bool temSete(int x) {
    string aux = to_string(x);
    for(auto x : aux) {
        if(x == '7') return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m >> k and (n||m||k)) {
        x = 1; i= 1; cnt = 0; ans = -1; ordem = true; w = 100000;
        while(w--) {
            if(i == m and (x % 7 == 0 or temSete(x))) {
                cnt++;
                if(cnt == k) {
                    ans = x;
                    break;
                }
            }
            x++;
            if(i == n) ordem = false;
            if(i == 1) ordem = true;
            if(ordem) i++;
            else i--;
        }
        cout << ans << "\n";
    }
}
