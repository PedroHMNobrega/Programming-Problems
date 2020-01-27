//Jogo do Tijolo
//Assunto: Mediana/ Sort;
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

int t, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    loop(test, 1, t+1) {
        cin >> n;
        vector<int> p(n);
        loop(i, 0, n) {
            cin >> p[i];
        }
        sort(all(p));
        cout << "Case " << test << ": ";
        cout << p[n/2] << "\n";
    }
}
