//Rerisson e o Churrasco
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
typedef pair<string, int> ii;

int n, g;
string s, t;
map<string, vector<string>> amizade;
set<string> ans;

void bfs() {
    map<string, int> vis;
    queue<ii> q;
    q.push({"Rerisson", 0});
    while(!q.empty()) {
        string top = q.front().fi; int num = q.front().se; q.pop();
        if(num == g+1) return;
        if(top != "Rerisson") ans.insert(top);
        for(auto x : amizade[top]) {
            if(!vis[x]) {
                vis[x] = 1;
                q.push({x, num+1});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> g;
    while(n--) {
        cin >> s >> t;
        amizade[s].pb(t); amizade[t].pb(s);
    }
    bfs();
    cout << ans.size() << "\n";
    for(auto x : ans) {
        cout << x << "\n";
    }

}
