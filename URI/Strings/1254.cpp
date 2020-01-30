//Substituição de Tag
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
    string subs, num, texto, ans;
    bool aberto, start, usou;
    char letra;
    int i, j, k;
    while(getline(cin, subs)) {
        getline(cin, num); getline(cin, texto);
        aberto = false; start = false;
        ans = "";
        i = 0; 
        while(i < texto.size()) {
            usou = false;
            letra = texto[i];
            if(letra == '<') aberto = true;
            if(letra == '>') aberto = false;
            if(tolower(letra) == tolower(subs[0]) and aberto) {
                j = 1; k = i+1;
                while(tolower(texto[k]) == tolower(subs[j]) and j < subs.size()) {
                    j++; k++;
                }
                if(j == subs.size()) {
                    ans += num;
                    i = k-1;
                    usou = true;
                } 
            } 
            if(!usou) ans += letra;
            i++;
        }
        cout << ans << "\n";
    }
}
