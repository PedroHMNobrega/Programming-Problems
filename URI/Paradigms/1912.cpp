//Ajude Seu Madruga
//Assunto: Greedy
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, nTiras, i, j;
double dif, a, ai, ansTotal;
long double ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(cin >> n >> a && n != 0) {
        vector<double> comp(n);
        ll soma = 0;
        loop(i, 0, n) {
            cin >> comp[i];
            soma += comp[i];
        }
        if(soma == a) {
            cout << ":D\n";
        } else if(soma < a) {
            cout << "-.-\n";
        } else {
            sort(comp.rbegin(), comp.rend());
            ans = 0;
            ansTotal = 0;
            i = 0;
            nTiras = 0;
            ai = a;
            while(a > 0 and i < n-1) {
                j = i+1;
                while(j < n-1 and comp[j] == comp[j+1]) j++;
                nTiras = i+1;
                dif = (comp[i] - comp[j]) * nTiras;
                if(dif + ansTotal >= ai) {
                    ans += a / nTiras;
                    a = 0;
                } else {
                    ans += dif / nTiras;
                    ansTotal += dif;
                    a -= dif;
                    i = j;
                }
            }
            if(a > 0) {
                ans += a / n;
            }
            cout << fixed << setprecision(4) << comp[0] - ans <<"\n";
        }
    }
}
