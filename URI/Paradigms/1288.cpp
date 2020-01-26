//Canhão de Destruição
//Assunto: Knapsack
#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int dp[100][100];

int knap(vector<pair<int, int>> projetil, int c, int idx, int idxMax) {
    if(idx >= idxMax) return 0;
    if(c <= 0) return 0;
    if(dp[c][idx] >= 0) return dp[c][idx];
    int coloca, nColoca;
    nColoca = knap(projetil, c, idx+1, idxMax);
    if(projetil[idx].second <= c) {
        coloca = projetil[idx].first + knap(projetil, c-projetil[idx].second, idx+1, idxMax);
        dp[c][idx] = max(coloca, nColoca);
        return dp[c][idx];
    }
    return nColoca;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio;
    cin.tie(0);

    int t, n, k, r, maxi;

    cin >> t;
    loop(test, 0, t) {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        vector<pair<int, int>> projetil(n);
        loop(i, 0, n) {
            cin >> projetil[i].first >> projetil[i].second;
        }
        cin >> k;
        cin >> r;
        maxi = knap(projetil, k, 0, n);
        if(maxi >= r) {
            cout << "Missao completada com sucesso\n";
        } else {
            cout << "Falha na missao\n";
        }
    }
}
