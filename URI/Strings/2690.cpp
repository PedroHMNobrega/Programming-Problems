//Nova Senha RA
//Assunto: String;
#include <bits/stdc++.h>
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
#define MAX 1000005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    string teste, blank, ans;

    cin >> n;
    getline(cin, blank);
    while(n--) {
        getline(cin, teste);
        ans = "";
        for(auto x: teste) {
            if(isalpha(x)) {
                if(x == 'G' or x == 'Q' or x == 'a' or x == 'k' or x == 'u') ans += '0';
                if(x == 'I' or x == 'S' or x == 'b' or x == 'l' or x == 'v') ans += '1';
                if(x == 'E' or x == 'O' or x == 'Y' or x == 'c' or x == 'm' or x == 'w') ans += '2';
                if(x == 'F' or x == 'P' or x == 'Z' or x == 'd' or x == 'n' or x == 'x') ans += '3';
                if(x == 'J' or x == 'T' or x == 'e' or x == 'o' or x == 'y') ans += '4';
                if(x == 'D' or x == 'N' or x == 'X' or x == 'f' or x == 'p' or x == 'z') ans += '5';
                if(x == 'A' or x == 'K' or x == 'U' or x == 'g' or x == 'q') ans += '6';
                if(x == 'C' or x == 'M' or x == 'W' or x == 'h' or x == 'r') ans += '7';
                if(x == 'B' or x == 'L' or x == 'V' or x == 'i' or x == 's') ans += '8';
                if(x == 'H' or x == 'R' or x == 'j' or x == 't') ans += '9';
            }
        }
        cout << ans.substr(0, 12) << '\n';
    }
}
