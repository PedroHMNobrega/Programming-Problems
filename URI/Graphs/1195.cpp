//Árvore Binária de Busca
//Assunto: Tree transversal/ Infixo, Prefixo e Posfixo/ findPrefixo/ Tree
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define MAX 100050
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int c, n, r;
unordered_map<int, vector<int>> adj;
vector<int> prefixo, posfixo, infixo;

void criarAdj(vector<int> &arvore) {
    if(arvore.size() <= 1) return;
    vector<int> esq, dir;
    loop(i, 1, arvore.size()) {
        if(arvore[i] < arvore[0]) esq.pb(arvore[i]);
        else dir.pb(arvore[i]);
    }
    if(!esq.empty()) adj[arvore[0]].pb(esq[0]);
    if(!dir.empty()) adj[arvore[0]].pb(dir[0]);
    criarAdj(esq);
    criarAdj(dir);
}

void findPrefixo(int no) {
    if(adj[no].empty()) {
        prefixo.pb(no);
        return;
    }
    prefixo.pb(no);
    findPrefixo(adj[no][0]); 
    if(adj[no].size() == 2) findPrefixo(adj[no][1]); 
}

void findInfixo(int no) {
    if(adj[no].empty()) {
        infixo.pb(no);
        return;
    }
    if(adj[no].size() == 2) {
        findInfixo(adj[no][0]);
        infixo.pb(no);
        findInfixo(adj[no][1]);
    } else {
        if(adj[no][0] < no) {
            findInfixo(adj[no][0]);
            infixo.pb(no);
        } else {
            infixo.pb(no);
            findInfixo(adj[no][0]);
        }
    }
}

void findPosfixo(int no) {
    if(adj[no].empty()) {
        posfixo.pb(no);
        return;
    }
    findPosfixo(adj[no][0]); 
    if(adj[no].size() == 2) findPosfixo(adj[no][1]); 
    posfixo.pb(no);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> c;
    loop(teste, 1, c+1) {
        cin >> n;
        vector<int> arvore(n);
        loop(i, 0, n) cin >> arvore[i];
        criarAdj(arvore);
        findPrefixo(arvore[0]);
        findInfixo(arvore[0]);
        findPosfixo(arvore[0]);

        cout << "Case " << teste << ":\n";
        cout << "Pre.: "; 
        loop(i, 0, n) {
            if(i < n-1) cout << prefixo[i] << " ";
            else cout << prefixo[i] << "\n";
        }
        cout << "In..: "; 
        loop(i, 0, n) {
            if(i < n-1) cout << infixo[i] << " ";
            else cout << infixo[i] << "\n";
        }
        cout << "Post: "; 
        loop(i, 0, n)  {
            if(i < n-1) cout << posfixo[i] << " ";
            else cout << posfixo[i] << "\n";
        }
        cout << "\n";
        infixo.clear(), prefixo.clear(); posfixo.clear(); adj.clear();
    }
}
