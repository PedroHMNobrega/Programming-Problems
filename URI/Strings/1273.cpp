//Jutificador
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, maxi, tam, spaces;
    bool first = true;

    while(cin >> n and n) {
        if(!first) cout << "\n";
        first = false;
        
        vector<string> p(n);
        maxi = 0;
        loop(i, 0, n) {
            cin >> p[i];
            tam = p[i].size();
            maxi = max(maxi, tam);
        }
        for(auto x : p) {
            spaces = maxi - x.size();
            while(spaces--) cout << " ";
            cout << x << "\n";
        }
    }
}
