//Kaprekar
//Assunto: String/ Ordenação;
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

int t, n;

int bigSmall(int x, bool swtc) {
    vector<char> v;
    string s = to_string(x);
    while(s.size() < 4) s += '0';
    for(auto c : s) v.pb(c);
    if(swtc) sort(all(v));
    else sort(rall(v));
    s = "";
    for(auto c : v) s += c;
    return stoi(s);
}

int krapekar(int X) {
   int cnt = 0;
   while (X != 6174) {
       int maior = bigSmall(X, 0);
       int menor = bigSmall(X, 1);
       X = maior - menor;
       cnt = cnt + 1;
   }
   return cnt;
}

bool veri(int x) {
    set<char> qnt;
    string s = to_string(x);
    while(s.size() < 4) s += '0';
    for(auto c : s) qnt.insert(c);
    if(qnt.size() == 1) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    loop(i, 1, t+1) {
        cin >> n;
        cout << "Caso #" << i << ": ";
        if(veri(n)) cout << krapekar(n) << "\n";
        else cout << "-1\n";
    }
}
