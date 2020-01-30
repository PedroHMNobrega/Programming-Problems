//Soma de Propina
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
    string s1, s2, v1 = "", v2 = "", cpf;
    double n1, n2, ans;
    size_t found;

    cin >> s1 >> s2;  

    for(auto x: s1) if(isdigit(x) or x == '.') v1 += x;
    for(auto x: s2) if(isdigit(x) or x == '.') v2 += x;
    cpf = v1.substr(0, 11);
    v1 = v1.substr(11, v1.size());

    found = v1.find(".");
    if(found != string::npos) v1 = v1.substr(0, found+3);
    found = v2.find(".");
    if(found != string::npos) v2 = v2.substr(0, found+3);

    n1 = stod(v1); n2 = stod(v2);
    ans = n1 + n2;

    cout << "cpf " << cpf << '\n';
    cout << fixed << setprecision(2) << ans << '\n';
}
