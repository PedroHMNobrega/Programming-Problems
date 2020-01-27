//Vampiros
//Assunto: Gambler's Ruin
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int at, d;
double ans, q, p, e1, e2;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> e1 >> e2 >> at >> d and (e1||e2||at||d)) {
        e1 = ceil(e1 / d); e2 = ceil(e2 / d);
        if(at == 3) {
            ans = e1 / (e1+e2);
        } 
        else { 
            p = at / 6.0;
            q = 1 - p;
            ans = (1 - pow(q/p, e1)) / (1 - pow(q/p, (e1 + e2)));
        }
        printf("%.1f\n", ans * 100);
    }
}
