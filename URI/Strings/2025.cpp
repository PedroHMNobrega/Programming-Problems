//Joulupukki
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
    int n;
    string linha, blank;

    cin >> n;
    getline(cin, blank);
    while(n--) {
        getline(cin, linha);
        vector<int> pos;
        size_t found = linha.find("oulupukk");
        while(found != string::npos) {
            pos.pb(found);
            found = linha.find("oulupukk", found+1);
        }
        for(auto x : pos) {
            linha[x-1] = 'J';
            linha[x+8] = 'i';
        }
        cout << linha << '\n';
    }
}
