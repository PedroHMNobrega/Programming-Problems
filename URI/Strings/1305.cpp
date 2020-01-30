//Arredondamento por Valor de Corte
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

int j, ponto, n;
double d;
string num, cutof, cutof2, decim, inte;

bool great(string a, string b) {
    if(a == b) return true;
    loop(i, 0, a.size()) {
        if(a[i] > b[i]) return true;
        else if(a[i] < b[i]) return false;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> num) {
        cin >> cutof;
        inte = "-"; 
        decim = "-"; 
        ponto = -1;
        loop(i, 0, num.size()) {
            if(num[i] == '.') {
                ponto = i;
                break;
            }
        }
        if(ponto == -1) inte = num;
        else {
            if(ponto > 0) inte = num.substr(0, ponto);
            if(ponto < num.size()-1) decim = num.substr(ponto+1, num.size());
        }
        if(decim == "-") cout << inte << "\n";
        else {
            if(inte == "-") n = 0;
            else n = stoi(inte);
            cutof2 = cutof.substr(2, cutof.size());
            while(decim.size() < cutof2.size()) decim += '0';
            while(cutof2.size() < decim.size()) cutof2 += '0';
            if(great(decim, cutof2)) n++;
            cout << n << "\n";
        }
    }   
}
