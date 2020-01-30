//Espiral Quadrada
//Assunto: String;
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loopBack(i, a, b) for(int i = a; i >= b; i--)
#define INF INT_MAX
#define LINF LLONG_MAX
#define DINF DBL_MAX
#define MAX 1000005
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n, xI, xF, yI, yF, x, y, w;
char tabela[26][26];

void printTabela() {
    loop(i, 0, n) {
        loop(j, 0, n) cout << tabela[i][j];
        if(i < n-1) cout << "\n";
    }
    cout << "\n@\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while(cin >> n and n) {
        loop(i, 0, n) loop(j, 0, n) tabela[i][j] = 'O';
        tabela[n/2][n/2] = 'X';
        printTabela();
        if(n != 1) {
            xI = n/2 - 1; xF = n/2 + 1;
            yI = n/2 - 1; yF = n/2 + 1;
            x = (int)(n/2); y = (int)(n/2);
            while(tabela[n-1][n-1] != 'X') {
                if(x == n/2 and y == n/2) {
                    tabela[x][y] = 'O';
                    y++;
                    tabela[x][y] = 'X';
                    printTabela();
                } else if(x > xI and y == yF) {
                    tabela[x][y] = 'O';
                    x--;
                    tabela[x][y] = 'X';
                    printTabela();
                } else if(x == xI and y > yI) {
                    tabela[x][y] = 'O';
                    y--;
                    tabela[x][y] = 'X';
                    printTabela();
                } else if(x < xF and y == yI) {
                    tabela[x][y] = 'O';
                    x++;
                    tabela[x][y] = 'X';
                    printTabela();
                } else if(x == xF and y < yF) {
                    if(y == yI) {
                        yI--; 
                        yF++;
                    }
                    tabela[x][y] = 'O';
                    y++;
                    tabela[x][y] = 'X';
                    if(y == yF) {
                        xI--; 
                        xF++;
                    }
                    printTabela();
                } 
            }
        }
    }
}
