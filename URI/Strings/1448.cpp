//Telefone Sem Fio
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
    int t, p1, p2, a1, a2;
    string s1, s2, s3, blank;

    cin >> t;
    getline(cin, blank);
    loop(test, 1, t+1) {
        getline(cin, s1); getline(cin, s2); getline(cin, s3);
        p1 = p2 = 0;
        a1 = -1; a2 = -1;
        loop(i, 0, s1.size()) {
            if(s1[i] == s2[i]) p1++;
            if(s1[i] == s3[i]) p2++;
            if(s1[i] == s2[i] and s1[i] != s3[i]) if(a2 == -1) a2 = i;
            if(s1[i] != s2[i] and s1[i] == s3[i]) if(a1 == -1) a1 = i;
            
        }
        cout << "Instancia " << test << '\n';
        if(p1 == p2) {
            if(a1 == a2) cout << "empate\n\n";
            else if(a1 > a2) cout << "time 1\n\n";
            else cout << "time 2\n\n";
        }
        else if(p1 > p2) cout << "time 1\n\n";
        else cout << "time 2\n\n";
    }
}
