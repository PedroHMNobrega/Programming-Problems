//Encaixa ou Não II
//Assunto: BigInteger, String;
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

int n;
string n1, n2;

bool solve(string a, string b) {
    int i, j;
    i = a.size() - 1;
    j = b.size() - 1;
    while(j >= 0) {
        if(a[i] != b[j]) return false;
        i--; j--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    while(n--) {
        cin >> n1 >> n2;
        if(solve(n1, n2)) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
}
