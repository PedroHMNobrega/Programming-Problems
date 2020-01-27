//Mapa do Meistre
//Assunto: Grafo/Mapa
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loobBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int x, y;
string s;
bool vis[105][105];
vector<string> mapa;
char d, e, c, b;

char baixo(int i, int j);
char cima(int i, int j);
char direita(int i, int j);
char esquerda(int i, int j);

char baixo(int i, int j) {
    while(i < x) {
        if(mapa[i][j] == '.' or mapa[i][j] == 'v') i++;
        else if(mapa[i][j] == '*') return '*';
        else {
            if(mapa[i][j] == '>' and j < y-1 and !vis[i][j]) {
                vis[i][j] = true;
                j++;
                d = direita(i, j);
                return d;
            } else if(mapa[i][j] == '<' and j > 0 and !vis[i][j]) {
                vis[i][j] = true;
                j--;
                e = esquerda(i, j);
                return e;
            } else return '!';
        }
    }
    return '!';
}

char cima(int i, int j) {
    while(i >= 0) {
        if(mapa[i][j] == '.' or mapa[i][j] == '^') i--;
        else if(mapa[i][j] == '*') return '*';
        else {
            if(mapa[i][j] == '>' and j < y-1 and !vis[i][j]) {
                vis[i][j] = true;
                j++;
                d = direita(i, j);
                return d;
            } else if(mapa[i][j] == '<' and j > 0 and !vis[i][j]) {
                vis[i][j] = true;
                j--;
                e = esquerda(i, j);
                return e;
            } else return '!';
        }
    }
    return '!';
}

char direita(int i, int j) {
    while(j < y) {
        if(mapa[i][j] == '.' or mapa[i][j] == '>') j++;
        else if(mapa[i][j] == '*') return '*';
        else {
            if(mapa[i][j] == 'v' and i < x-1 and !vis[i][j]) {
                vis[i][j] = true;
                i++;
                b = baixo(i, j);
                return b;
            } else if(mapa[i][j] == '^' and i > 0 and !vis[i][j]) {
                vis[i][j] = true;
                i--;
                c = cima(i, j);
                return c;
            } else return '!';
        }
    }
    return '!';
}

char esquerda(int i, int j) {
    while(j >= 0) {
        if(mapa[i][j] == '.' or mapa[i][j] == '<') j--;
        else if(mapa[i][j] == '*') return '*';
        else {
            if(mapa[i][j] == 'v' and i < x-1 and !vis[i][j]) {
                vis[i][j] = true;
                i++;
                b = baixo(i, j);
                return b;
            } else if(mapa[i][j] == '^' and i > 0 and !vis[i][j]) {
                vis[i][j] = true;
                i--;
                c = cima(i, j);
                return c;
            } else return '!';
        }
    }
    return '!';
}

char solve() {
    int i = 0, j = 0;
    vis[0][0] = true;
    if(mapa[0][0] == '.') return '!';
    else if(mapa[0][0] == '*') return '*';
    else {
        if(mapa[0][0] == '>') {
            j++;
            d = direita(i, j);
            return d;
        } else if(mapa[0][0] == 'v') {
            i++;
            b = baixo(i, j);
            return b;
        } else if(mapa[0][0] == '<' or mapa[0][0] == '^') return '!';
        
    }
    return '!';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> y;
    cin >> x;
    loop(i, 0, x) {
        cin >> s;
        mapa.pb(s);
    }
    cout << solve() << "\n";
}
