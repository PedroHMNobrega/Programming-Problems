//Um-Dois-Três
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
    int n, iguais;
    string num, one;
    
    cin >> n;
    while(n--) {
        cin >> num;
        if(num.size() == 5) cout << "3\n";
        else {
            iguais = 0;
            one = "one";
            loop(i, 0, 3) if(num[i] == one[i]) iguais++;
            if(iguais >= 2) cout << "1\n";
            else cout << "2\n";
        }
    }
}
