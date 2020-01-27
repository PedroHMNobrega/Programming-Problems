//Formatação Monetária
//Assunto: String / Formatação;
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

string s1, s2, ans;
int cnt;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> s1) {
        cin >> s2;
        if(s2.size() == 1) {
            ans = s2;
            ans += '0';
        } else {
            ans = s2[1];
            ans += s2[0];
        }
        ans += '.';
        cnt = 0;
        loopBack(i, s1.size()-1, 0) {
            if(cnt == 3) {
                cnt = 0;
                ans += ',';
            }
            ans += s1[i];
            cnt++;
        }
        ans += '$';
        loopBack(i, ans.size()-1, 0) cout << ans[i];
        cout << "\n";
    }
}
