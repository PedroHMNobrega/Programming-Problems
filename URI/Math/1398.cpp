//Oceano Profundo! Faça-o Raso!!
//Assunto: Big Integer;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define Ians INT_MAX
#define LIans LLONG_MAX
#define DIans DBL_MAX
#define MAX 80000
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string num;
int ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> num) {
        ans = 0;
        while(true) {
            if(num[num.size()-1] == '#') {
                loop(i, 0, num.size()-1) {
                    ans *= 2;
                    ans += (num[i] - '0');
                    ans %= 131071;
                }
                break;
            } else {
                loop(i, 0, num.size()) {
                    ans *= 2;
                    ans += (num[i] - '0');
                    ans %= 131071;
                }
                cin >> num;
            }

        }
        if(ans == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
