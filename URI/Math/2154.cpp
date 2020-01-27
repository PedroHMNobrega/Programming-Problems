//Derivada de Polinômios
//Assunto: String;
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

int n, k;
string s, v1;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n) {
        vector<int> c(n), e(n);
        k = 0;
        loop(i, 0, n*2-1) {
            cin >> s;
            v1 = "";
            if(s != "+") {
                loop(j, 0, s.size()) {
                    if(s[j] == 'x') {
                        c[k] = stoi(v1);
                        v1 = "";
                    } else v1 += s[j];
                }
                e[k] = stoi(v1);
                k++;
            }
        }
        if(e[0] - 1 > 1) printf("%dx%d", c[0]*e[0], e[0]-1);
        else printf("%dx", c[0]*e[0]);
        loop(i, 1, n) {
            if(e[i] - 1 > 1) printf(" + %dx%d", c[i]*e[i], e[i]-1);
            else printf(" + %dx", c[i]*e[i]);
        } 
        printf("\n");
    }
}
