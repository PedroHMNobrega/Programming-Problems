//Ano Bissexto ou Ano não Bissexto
//Assunto: Big Integer/ MMC / Mod;
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

const int mmc = 13200;
string ano;
int a;
bool leap, pt, swtc = false;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> ano) {
        if(swtc) cout << "\n";
        swtc = true;
        a = 0;
        loop(i, 0, ano.size()) {
            a *= 10;
            a += ano[i] - '0';
            a %= mmc;
        }
        leap = false; pt = false;
        if(a % 400 == 0 or (a % 4 == 0 and a % 100 != 0)) {
            cout << "This is leap year.\n";
            leap = true;
            pt = true;
        }
        if(a % 15 == 0) {
            cout << "This is huluculu festival year.\n";
            pt = true;
        }
        if(leap and a % 55 == 0) {
            cout << "This is bulukulu festival year.\n";
            pt = true;
        }
        if(!pt) cout << "This is an ordinary year.\n";
    }
}
