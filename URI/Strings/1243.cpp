//O Quão Fácil é...
//Assunto: String 
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

int solve(string s) {
    int total = 0, palavras = 0, aux = 0;
    bool start = false, alpha;
    loop(i, 0, s.size()) {
        alpha = isalpha(s[i]);
        if(alpha and (i == 0 or s[i-1] == ' ')) {
            start = true;
            aux++;
        } 
        else if(alpha and start) aux++;
        if(start and (s[i] == '.' or alpha) and (i+1 == s.size() or s[i+1] == ' ')) {
            total += aux;
            palavras++;
            aux = 0;
            start = false;
        } else if(!alpha) {
            aux = 0;
            start = false;
        }
    }
    if(palavras == 0) return 0;
    return total / palavras;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string linha;
    int ans;
    while(getline(cin, linha)) {
        ans = solve(linha);
        if(ans <= 3) cout << "250\n";
        else if(ans == 4 or ans == 5) cout << "500\n";
        else cout << "1000\n";
    }
}
