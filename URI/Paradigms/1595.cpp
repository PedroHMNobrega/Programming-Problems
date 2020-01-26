//Humm.. Andar ou Correr.. Eis a Questão
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

int t, pts, c, r, vi;
double ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        ans = 0;
        cin >> pts >> c >> r;
        vector<double> speed(pts);
        loop(i, 0, pts) {
            cin >> speed[i];
        }
        sort(all(speed));
        loop(i, 0, pts) {
            if(c > 0) {
                ans += 1 / (speed[i] + r);
                c--;
            } else {
                ans += 1 / speed[i];
            }
        }
        printf("%.2f\n", ans);
    }
}
