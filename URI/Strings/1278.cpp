//Justificador II
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

string junta(string s) {
    string ans = "", aux = "";
    int i = 0;
    while(i < s.size()) {
        if(isalpha(s[i]) and (i == 0 or s[i-1] == ' ')) {
            while(i < s.size() and isalpha(s[i])) aux += s[i++];
            ans += aux; ans += ' ';
            aux = "";
        }
        i++;
    }
    return ans.substr(0, ans.size()-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, maxi, tam, spaces;
    string blank;
    bool fst = true;

    while(cin >> n and n) {
        if(!fst) cout << "\n";
        fst = false;

        getline(cin, blank);
        vector<string> linhas(n);
        maxi = 0;
        loop(i, 0, n) {
            getline(cin, linhas[i]);
            linhas[i] = junta(linhas[i]);
            tam = linhas[i].size();
            maxi = max(maxi, tam);
        }
        loop(i, 0, n) {
            spaces = maxi - linhas[i].size();
            while(spaces--) cout << " ";
            cout << linhas[i] << "\n";
        } 
    }
}
