//Angry Ducks
//Assunto: Física/ Lançamento Oblíquo
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

const double pi = 3.14159, g = 9.80665;
double h, a, v, dist;
int p1, p2, n;

double vx, vy, t1, t2, t;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> h) {
        cin >> p1 >> p2;
        cin >> n;
        while(n--) {
            cin >> a >> v;

            vx = v * cos(a * pi / 180.0);
            vy = v * sin(a * pi / 180.0);
            t1 = (-vy + sqrt(pow(vy, 2) + 4 * (g/2) * h)) / (2 * (-g/2));
            t2 = (-vy - sqrt(pow(vy, 2) + 4 * (g/2) * h)) / (2 * (-g/2));
            t = max(t1, t2);
            dist = vx * t;

            printf("%.5f -> ", dist);
            if(dist >= p1 and dist <= p2) printf("DUCK\n");
            else printf("NUCK\n");
        }
    }
}
