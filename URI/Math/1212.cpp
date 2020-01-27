//Aritmética Primária
//Assunto: Soma
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

int ans, k, j, carry;
string x, y;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> x >> y) {
        if(x == "0" and y == "0") break;
        ans = 0; carry = 0;
        k = x.size()-1;
        j = y.size()-1;
        while(k >= 0 and j >= 0) {
            if(((x[k] - '0') + (y[j] - '0') + carry) >= 10) {
                ans++;
                carry = 1;
            } else carry = 0;
            k--; j--;
        }
        if(carry) {
            if(k >= 0) while(x[k--] == '9') ans ++;
            else while (y[j--] == '9') ans++;   
        }
        if(ans == 0) cout << "No carry operation.\n";
        else if(ans == 1) cout << "1 carry operation.\n";
        else cout << ans << " carry operations.\n";
    }
}
