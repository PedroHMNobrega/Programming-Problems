//Jetiqui
//Assunto: String/ Find;
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
    int c, t1, t2;
    string p1, p2, p3;
    size_t found;

    cin >> c;
    while(c--) {
        cin >> p1 >> p2 >> p3;
        
        found = p3.find('_');
        t1 = found;
        found = p3.find('_', found+1);
        t2 = found;

        if(p1[t1] == p2[t2] or p1[t2] == p2[t1]) cout << "Y\n";
        else cout << "N\n";
    }
}
