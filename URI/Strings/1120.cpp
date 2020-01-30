//Revisão de Contrato
//Assunto: String;
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

int d, num;
string n, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> d >> n and d) {
        ans = "";
        for(auto x : n) {
            num = x - '0';
            if(num != d) {
                if(ans == "" and num == 0) continue;
                else ans += x;
            }
        }
        if(ans == "") cout << "0\n";
        else cout << ans << "\n";
    }
}
