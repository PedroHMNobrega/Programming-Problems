//Fechem as Portas!
//Assunto: Sequencia;
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

int n, aux, i;
vector<int> seq(5005);
bool first;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    seq[0] = 1; aux = 3;
    loop(i, 1, 5005) {
        seq[i] = seq[i-1] + aux;
        aux += 2;
    }
    while(cin >> n and n) {
        i = 0;
        first = false;
        while(seq[i] <= n) {
            if(first) cout << " ";
            else first = true;
            cout << seq[i++];
        } cout << "\n";
    }
}
