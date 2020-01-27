//Triângulo de Pascal
//Assunto: Triangulo de Pascal;
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

vector<ll> ans(32);
ll ante;
int t, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    loop(i, 1, 32) {
        ans[i] = pow(2, i-1) + ante;
        ante = ans[i];
    }
    cin >> t;
    while(t--) {
        cin >> n;
        cout << ans[n] << "\n";
    }
}
