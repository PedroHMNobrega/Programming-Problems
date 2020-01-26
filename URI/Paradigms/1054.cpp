//Sapo Dinâmico
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

int t, n, d, tam, dst, ans;
char sz, tr;

int pulos(vector<ii> &pedras, int n) {
    int a = 0;
    int d = 0;
    int c = 1;
    loop(i, 0, n+1) {
        if(pedras[i].f == 1) {
            a = max(a, abs(d - pedras[i].s));
            d = pedras[i].s; 
        } else if(pedras[i].f == 0) {
            if(c) {
                pedras[i].f = 2;
                a = max(a, abs(d - pedras[i].s));
                d = pedras[i].s; 
            }
            c^=1;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(pedras[i].f <= 1) {
            a = max(a, abs(d - pedras[i].s));
            d = pedras[i].s;
        }
    }
    a = max(a, d);
    return a;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    cin >> t;
    loop(test, 0, t) {
        cin >> n >> d;
        vector<ii> pedras(n);
        loop(i, 0, n) {
            cin >> sz >> tr >> dst;
            pedras[i] = {sz == 'B', dst};
        }
        pedras.pb({1, d});

        ans = pulos(pedras, n);

        cout << "Case " << test+1 << ": " << ans << "\n";
    }
}
