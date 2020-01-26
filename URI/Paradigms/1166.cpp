//Six Flags
//Assunto: Greedy
#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(),x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
 
using namespace std;
 
typedef long long int ll;
typedef pair<int,int> ii;

int t, n, ans, idx, num;   

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    loop(test, 0, t) {
        cin >> n;
        vector<vector<int>> hastes(n);
        idx = 0;
        ans = 0;
        num = 1;
        while(idx < n) {
            if(hastes[idx].empty()) {
                hastes[idx].pb(num);
                idx = 0;
                ans++;
                num++;
            } else if((float)sqrt(hastes[idx][hastes[idx].size()-1] + num) - sqrt(hastes[idx][hastes[idx].size()-1] + num) == 0) {
                hastes[idx].pb(num);
                idx = 0;
                ans++;
                num++;
            } else {
                idx++;
            }
        }
        cout << ans << "\n";
    }
}
