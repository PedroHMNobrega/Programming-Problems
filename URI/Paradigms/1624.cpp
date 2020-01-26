//Promoção
//Assunto: Knapsack DP;
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
#define MAX 80000
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, m, peso[105], preco[105], dp[105][150];

int solve(int idx, int falta) {
    if(idx >= n) return 0;
    if(falta <= 0) return 0;
    if(dp[idx][falta] >= 0) return dp[idx][falta];
    int botar, nBotar;
    nBotar = solve(idx+1, falta);
    if(peso[idx] <= falta) {
        botar = preco[idx] + solve(idx+1, falta-peso[idx]);
        return dp[idx][falta] = max(botar, nBotar);
    }
    return dp[idx][falta] = nBotar;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        loop(i, 0, n) cin >> preco[i] >> peso[i];
        cin >> m;
        memset(dp, -1, sizeof(dp));
        cout << solve(0, m) << "\n";
    }
}
