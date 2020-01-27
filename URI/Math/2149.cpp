//Sequência do Tio Phill Bonati
//Assunto: Sequencias;
#include<bits/stdc++.h>
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
#define MAX 1000500
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n;
vector<ll> seq(18);

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    seq[1] = 0; seq[2] = 1;
    loop(i, 3, 18) {
        if(i % 2 == 0) seq[i] = seq[i-1] * seq[i-2];
        else seq[i] = seq[i-1] + seq[i-2];
    }
    while(cin >> n) cout << seq[n] << "\n";
}   
