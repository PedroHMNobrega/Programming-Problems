//Polícia e Ladrão
//Assunto: Backtracking/ Dp
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t;
int labirinto[5][5];
int vis[5][5];
bool ans;

void back(int iniC, int iniL) {
    if(iniC == 4 and iniL == 4 and labirinto[iniL][iniC] == 0) {
        ans = true;
        return;
    }
    if(!ans and iniC <= 4 and iniL <= 4 and  iniC >= 0 and iniL >= 0 and labirinto[iniL][iniC] == 0 and vis[iniL][iniC] != 1) {
        vis[iniL][iniC] = 1;
        back(iniC+1, iniL);
        back(iniC, iniL+1);
        back(iniC-1, iniL);
        back(iniC, iniL-1);
        vis[iniL][iniC] = 0;
    } 
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        loop(i, 0, 5) {
            loop(j, 0, 5) {
                cin >> labirinto[i][j];
            }
        }
        ans = false;
        vector<int> a (5, 0);
        back(0, 0);
        if(ans) {
            cout << "COPS\n";
        } else {
            cout << "ROBBERS\n";
        }
    } 
}
