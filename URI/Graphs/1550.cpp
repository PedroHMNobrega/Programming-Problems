//Inversão
//Assunto: BFS;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, a, b;
bool vis[100000];

int reverte(int num) {
    string s2, s = to_string(num);
    s2 = "";
    loopBack(i, s.size()-1, 0) s2 += s[i];
    return stoi(s2);
}

int bfs(int no) {
    if(no == b) return 0;
    queue<ii> q;
    memset(vis, false, sizeof(vis));
    vis[no] = true;
    q.push({no, 1});
    while(!q.empty()) {
        int t1, t2, top = q.front().fi, nivel = q.front().se; q.pop();
        t1 = top + 1;
        t2 = reverte(top);
        if(t1 == b or t2 == b) return nivel;
        if(!vis[t1]) q.push({t1, nivel+1});
        if(!vis[t2]) q.push({t2, nivel+1});
        vis[t1] = true; vis[t2] = true;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << bfs(a) << "\n";
    }
}
