//Salas Separadas
//Assunto: Bipartite Graph/ BFS
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, x, y;
string s, blank;
vector<int> ls;

vector<int> split(string s) {
    vector<int> nums;
    string aux = "";
    loop(i, 0, s.size()) {
        if(s[i] == ' ') {
            nums.pb(stoi(aux));
            aux = "";
        } else aux += s[i]; 
    }
    if(aux != "") nums.pb(stoi(aux));
    return nums;
}

bool bfs(int no, set<int> adj[]) {
    int cor;
    queue<int> q;
    vector<int> vis(n+1, 0);
    q.push(no);
    vis[no] = 1;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        if(vis[top] == 1) cor = 2;
        else cor = 1;
        for(auto x : adj[top]) {
            if(vis[x] == 0) {
                vis[x] = cor;
                q.push(x);
            }
            if(vis[x] == vis[top]) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n) {
        set<int> adj[n+1];
        loop(i, 1, n+1) {
            cin >> x;
            getline(cin, blank);
            getline(cin, s);
            ls = split(s);
            loop(j, 0, ls.size()) {
                adj[x].insert(ls[j]);
                adj[ls[j]].insert(x);
            }
        }
        if(bfs(1, adj)) cout << "SIM\n";
        else cout << "NAO\n";
    }
}
