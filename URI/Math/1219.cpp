//Flores Coloridas
//Assunto: Area triangulo e circunfrência inscrito e circunscrito;  
#include<bits/stdc++.h>
#include<stdlib.h>
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

double a1, a2, a3, r1, r2, a, b, c, p, pi = M_PI;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> a >> b >> c) {
        p = (a + b + c) / 2;
        a2 = sqrt(p*(p-a)*(p-b)*(p-c));

        r1 = (a*b*c) / (4 * a2);
        a1 = (pi * r1 * r1) - a2;
        
        r2 = (a2 * 2) / (a + b + c);
        a3 = pi * r2 * r2;

        a2 -= a3;
        printf("%.4f %.4f %.4f\n", a1, a2, a3);
    }
}
