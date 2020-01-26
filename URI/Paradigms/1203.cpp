//Pontes de São Petersburgo
//Assunto: DP
#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int dp[105][5005];
bool ans;

void rec(vector<int> &listaAdj, int r, int k, int idx, int num) {
    if(num == k) {
        ans = true;
        return;
    }
    if(idx >= r) return;
    if(num > k) return;
    if(dp[idx][num] >= 0) return;
    rec(listaAdj, r, k, idx+1, num);
    rec(listaAdj, r, k, idx+1, num+listaAdj[idx]);
    dp[idx][num] = 1;
    return;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, k, a, b;
    while(cin >> r >> k) {
        memset(dp, -1, sizeof(dp));
        vector<int> listaAdj(r+1, 0);
        loop(i, 0, k) {
            cin >> a >> b;
            listaAdj[a]++;
            listaAdj[b]++;
        }
        ans = false;
        rec(listaAdj, r, k, 0, 0);
        if(ans) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }
}
