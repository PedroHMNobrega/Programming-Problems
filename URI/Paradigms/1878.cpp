//Torneios em Sequência
//Assunto: Brute Force/ Arranjos
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m;

bool solve(int n, int m, vector<int> &c) {
    vector<vector<int>> ars;
    vector<int> a;
    loop(i, 1, m+1) {
        a.pb(i);
        if(n >= 2) {
            loop(j, 1, m+1) {
                a.pb(j);
                if(n == 3) {
                    loop(k, 1, m+1) {
                        a.pb(k);
                        ars.pb(a);
                        a.pop_back();
                    }
                } else {
                    ars.pb(a);
                }
                a.pop_back();
            } 
        } else {
            ars.pb(a);
        }
        a.pop_back();
    }
    vector<int> notas;
    int nt;
    loop(i, 0, ars.size()) {
        nt = 0;
        for(int j = 0; j < n; j++) {
            nt += ars[i][j] * c[j];
        } 
        notas.pb(nt);
    }

    loop(i, 0, notas.size() - 1) {
        loop(j, i+1, notas.size()) {
            if(notas[i] == notas[j]) {
                return false;
            }
        }
    }
    return true;

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n >> m) {
        vector<int> c(n);
        loop(i, 0, n) {
            cin >> c[i];
        }
        if(solve(n, m, c)) {
            cout << "Lucky Denis!\n";
        } else {
            cout << "Try again later, Denis...\n";
        }
    }
}
