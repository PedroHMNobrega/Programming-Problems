//Isósceles
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

int n, ante, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    vector<int> h(n);
    vector<int> l1(n, 0);
    loop(i, 0, n) {
        cin >> h[i];
    }
    ante = 0;
    loop(i, 0, n) {
        if(h[i] > ante) {
            l1[i] = ante + 1;
        } else {
            l1[i] = h[i];
        }
        ante = l1[i];
    }
    ante = 0;
    for(int i = n-1; i > 0; i--) {
        if(h[i] > ante) {
            ante += 1;
        } else {
            ante = h[i];
        }
        ans = max(ans, min(ante, l1[i]));
    }
    cout << ans << "\n";
}
