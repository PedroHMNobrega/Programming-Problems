//Motoboy
//Assunto: Knapsack
#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int dp[100][100];

int escolheOuNao(vector<pair<int, int>> pedidos, int aguenta, int idx, int idxmaxP) {
    if(idx >= idxmaxP) return 0;
    if(aguenta <= 0) return 0;
    if(dp[idx][aguenta] >= 0) return dp[idx][aguenta];
    int nColoca, coloca = 0;

    nColoca = escolheOuNao(pedidos, aguenta, idx+1, idxmaxP);
    if(pedidos[idx].second <= aguenta) {
        coloca = pedidos[idx].first + escolheOuNao(pedidos, aguenta - pedidos[idx].second, idx+1, idxmaxP);
        dp[idx][aguenta] = max(nColoca, coloca);
        return dp[idx][aguenta];
    }
    return dp[idx][aguenta] = nColoca;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio;
    cin.tie(0);

    int n, p, t, qp, ans;

    while((cin >> n) && n != 0) {
        vector<pair<int, int>> pedidos(n); 
        cin >> p;
        loop(i, 0, n) {
            cin >> pedidos[i].first >> pedidos[i].second;
        }
        memset(dp, -1, sizeof(dp));
        ans = escolheOuNao(pedidos, p, 0, n);
        cout << ans << " min.\n";
    }
}
