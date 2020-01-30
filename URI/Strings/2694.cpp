//Problema com a Calculadora
//Assunto: String/ Substring;
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
    int n, n1, n2, n3;
    string linha, s1, s2, s3;

    cin >> n;
    while(n--) {
        cin >> linha;
        s1 = linha.substr(2, 2);
        s2 = linha.substr(5, 3);
        s3 = linha.substr(11, 2);
        n1 = stoi(s1); n2 = stoi(s2); n3 = stoi(s3);
        cout << n1 + n2 + n3 << '\n';
    }
}
