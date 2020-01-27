//Tudo o que Você Precisa é Amor
//Assunto: GCD/ Binário
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

int t, n1, n2;
string s1, s2;
vector<int> dv;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    loop(test, 1, t+1) {
        cin >> s1;
        cin >> s2;
        n1 = stoi(s1, 0, 2);
        n2 = stoi(s2, 0, 2);
        cout << "Pair #" << test << ": ";
        if(__gcd(n1, n2) != 1) cout << "All you need is love!\n";
        else cout << "Love is not all you need!\n";
    }
}
