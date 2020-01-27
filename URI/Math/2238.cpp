//Divisores
//Assunto: Math/ Divisores;
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
#define MAX 80000
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int a, b, c, d;

//Rever Essa Função:
vector<int> div(int n) {
    vector<int> v;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            v.pb(i);
        } 
    } 
    if(n % 2 == 0) v.pb(n/2);
    v.pb(n);
    return v;
}

int solve() {
    vector<int> divC, divN;
    bool p1, p2, p3;
    divC = div(c);
    for(auto x: divC) {
        divN = div(x);
        p1 = false;
        p2 = p3 = true;
        for(auto v : divN) {
            if(v == a) p1 = true;
            if(v == b) p2 = false;
        }
        if(d % x == 0) p3 = false;
        if(p1 and p2 and p3) {
            return x;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> a >> b >> c >> d;
    cout << solve() << "\n";
}
