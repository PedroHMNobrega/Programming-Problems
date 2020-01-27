//Feynman
//Assunto: Recursividade/ Sequência;
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

int n;
vector<int> v(105, -1);

int solve(int n) {
    if(v[n] >= 0) return v[n];
    return v[n] = (n*n) + solve(n-1);

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    v[1] = 1; v[2] = 5;
    while(cin >> n and n) {
        cout << solve(n) << "\n";
    }
}
