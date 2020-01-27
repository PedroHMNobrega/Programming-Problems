//Conversão entre Bases
//Assunto: Conversão de base;
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

int n, numF;
string num, base;

void toB(int x) {
    string ans = "";
    while(x) {
        if(x & 1) ans += '1';
        else ans += '0';
        x >>= 1;
    }
    loopBack(i, ans.size()-1, 0) printf("%c", ans[i]);
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    loop(test, 1, n+1) {
        cin >> num >> base;
        printf("Case %d:\n", test);
        if(base == "dec") {
            numF = stoi(num);
            printf("%x hex\n", numF);
            toB(numF); printf(" bin\n\n");
            
        } else if(base == "bin") {
            numF = stoi(num, 0, 2);
            printf("%d dec\n", numF);
            printf("%x hex\n\n", numF);
        } else {
            numF = stoi(num, 0, 16);
            printf("%d dec\n", numF);
            toB(numF); printf(" bin\n\n");
        }
    }
}
