//Comércio de Vinhos na Gergóvia
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

int n, idx;
ll ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while(cin >> n && n != 0) {
        vector<int> hab(n+1);
        vector<int> negativos;
        loop(i, 1, n+1) {
            cin >> hab[i];
            if(hab[i] < 0) {
                negativos.pb(i);
            }
        }
        idx = 0;
        ans = 0;
        loop(i, 1, n+1) {
            if(hab[i] > 0) {
                while(hab[i] > 0) {
                    if(hab[i] > abs(hab[negativos[idx]])) {
                        ans += abs(hab[negativos[idx]]) * abs(i - negativos[idx]);
                        hab[i] += hab[negativos[idx]];
                        idx++;
                    } else if(hab[i] < abs(hab[negativos[idx]])) {
                        ans += abs(hab[i]) * abs(i - negativos[idx]);
                        hab[negativos[idx]] += hab[i];
                        hab[i] = 0;
                    } else {
                        ans += abs(hab[i]) * abs(i - negativos[idx]);
                        hab[i] = 0;
                        idx++;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}
