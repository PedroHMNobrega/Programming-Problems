//Ajude Clotilde
//Assunto: BFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 1050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int o, d, k;

int bfs(vector<int> p) {
    unordered_map<int, int> vis;
    loop(i, 0, p.size()) vis[p[i]] = 1;
    queue<ii> q;
    q.push({o, 0});
    while(!q.empty()) {
        int top = q.front().fi, dist = q.front().se; q.pop();
        if(top == d) return dist;
        if(vis[top] == 0) {
            vis[top] = 1;
            if(top + 1 <= 100000) q.push({top+1, dist+1});
            if(top-1 > 0) q.push({top-1, dist+1});
            if(top * 2 <= 100000) q.push({top * 2, dist+1});
            if(top * 3 <= 100000) q.push({top * 3, dist+1});
            if(top % 2 == 0) q.push({top / 2, dist+1});
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> o >> d >> k and (o||d||k)) {
        vector<int> proibidos(k);
        loop(i, 0, k) {
            cin >> proibidos[i];
        }
        cout << bfs(proibidos) << "\n";
    }
}
