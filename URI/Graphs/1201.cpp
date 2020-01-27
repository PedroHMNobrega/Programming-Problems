//Operações em ABP II
//Assunto: Binary Search Tree;
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 10000000
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string op;
int x, raiz, tSize, w, maxi, maxiP;
ii mx;
vector<ii> adj(MAX, {0, 0});
vector<int> order;

void addNode(int add, int pai) {
    if(add < pai) {
        if(adj[pai].fi == 0) {
            adj[pai].fi = add;
            return;
        } else {
            addNode(add, adj[pai].fi);
        }
    } else {
        if(adj[pai].se == 0) {
            adj[pai].se = add;
            return;
        } else {
            addNode(add, adj[pai].se);
        }
    }
}

ii findMaxi(int no, int pai) {
    if(adj[no].se != 0) {
        findMaxi(adj[no].se, no);
    } else {
        return {no, pai};
    }
}

void removeNode(int remove, int no, int pai, char lado) {
    if(no == 0) return;
    if(remove < no) {
        removeNode(remove, adj[no].fi, no, 'e');
    } else if(remove > no) {
        removeNode(remove, adj[no].se, no, 'd');
    } else if(adj[no].fi != 0 and adj[no].se != 0) {
        mx = findMaxi(adj[no].fi, no);
        maxi = mx.fi; maxiP = mx.se;
        if(maxiP == no) {
            adj[maxi].se = adj[no].se;
            if(lado == 'd') adj[pai].se = maxi;
            else adj[pai].fi = maxi;
        } else {
            adj[maxiP].se = adj[maxi].fi;
            adj[maxi].fi = adj[no].fi;
            adj[maxi].se = adj[no].se;
            if(lado == 'd') adj[pai].se = maxi;
            else adj[pai].fi = maxi;
        }
        adj[no] = {0, 0};
        if(no == raiz) raiz = maxi;
        tSize--;
    } else {
        if(adj[no].fi != 0) {
            if(no == raiz) raiz = adj[no].fi;
            else {
                if(lado == 'd') adj[pai].se = adj[no].fi;
                else adj[pai].fi = adj[no].fi;
            }
        } else {
            if(no == raiz) raiz = adj[no].se;
            else {
                if(lado == 'd') adj[pai].se = adj[no].se;
                else adj[pai].fi = adj[no].se;
            }
        }
        adj[no] = {0, 0};
        tSize--;
    }   
}

bool search(int x, int no) {
    if(x < no) {
        if(adj[no].fi == x) return true;
        else if(adj[no].fi == 0) return false;
        search(x, adj[no].fi);
    } else {
        if(adj[no].se == x) return true;
        else if(adj[no].se == 0) return false;
        search(x, adj[no].se);
    }
}

void pre(int no) {
    order.pb(no);
    if(adj[no].fi != 0) pre(adj[no].fi);
    if(adj[no].se != 0) pre(adj[no].se);
}

void inf(int no) {
    if(adj[no].fi != 0) inf(adj[no].fi);
    order.pb(no);
    if(adj[no].se != 0) inf(adj[no].se);
}

void pos(int no) {
    if(adj[no].fi != 0) pos(adj[no].fi);
    if(adj[no].se != 0) pos(adj[no].se);
    order.pb(no); 
}

void printNodes() {
    loop(i, 0, order.size()) {
        if(i < order.size()-1) cout << order[i] << " ";
        else cout << order[i] << "\n";
    } order.clear();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> op >> x;
    raiz = x;
    tSize = 1;
    while(cin >> op) {
        if(op == "PREFIXA") {
            pre(raiz); printNodes();
        } else if(op == "INFIXA") {
            inf(raiz); printNodes();
        } else if(op == "POSFIXA") {
            pos(raiz); printNodes();
        } else if(op == "I") {
            cin >> x;
            if(tSize <= 0) {
                raiz = x;
                tSize = 1;
            } else {
                addNode(x, raiz);
                tSize++;
            }
        } else if(op == "R") {
            cin >> x;
            removeNode(x, raiz, raiz, 'c');
        } else {
            cin >> x;
            if(search(x, raiz)) cout << x << " existe\n";
            else cout << x << " nao existe\n";
        }
    }
}
