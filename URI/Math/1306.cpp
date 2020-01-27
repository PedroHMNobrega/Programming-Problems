//Numerando Estradas
//Assunto: Formula; 
#include<bits/stdc++.h>
#include<stdlib.h>
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int r, n, ans, test = 1;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> r >> n and (r||n)) {
        if(n == 0) {
            cout << "Case " << test << ": ";
            cout << "impossible\n";
        } else {
            ans = ceil(((double)(r)/n) - 1);
            cout << "Case " << test << ": ";
            if(ans > 26) cout << "impossible\n";
            else cout << ans << "\n";
        }
        test++;
    }
}
