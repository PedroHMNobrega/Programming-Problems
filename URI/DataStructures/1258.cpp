//Camisetas:
//Assunto: Map/ Dicionário
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int n;
string nome, cor, tam, blank;
char ele;
bool flag = false;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> n and n != 0) {
        if(flag) {
            cout << "\n";
        }
        flag = true;
        map<string, map<char, vector<string>>> ordem;
        for(int i = 0; i < n; i++) {
            getline(cin, blank);
            getline(cin, nome);
            cin >> cor >> tam;

            ordem[cor][tam[0]].push_back(nome);
            sort(ordem[cor][tam[0]].begin(), ordem[cor][tam[0]].end());
        }
        if(!ordem["branco"]['P'].empty()) {
            for(int i = 0; i < ordem["branco"]['P'].size(); i++) {
                cout << "branco P " << ordem["branco"]['P'][i] << "\n";
            }
        }
        if(!ordem["branco"]['M'].empty()) {
            for(int i = 0; i < ordem["branco"]['M'].size(); i++) {
                cout << "branco M " << ordem["branco"]['M'][i] << "\n";
            }
        }
        if(!ordem["branco"]['G'].empty()) {
            for(int i = 0; i < ordem["branco"]['G'].size(); i++) {
                cout << "branco G " << ordem["branco"]['G'][i] << "\n";
            }
        }
        if(!ordem["vermelho"]['P'].empty()) {
            for(int i = 0; i < ordem["vermelho"]['P'].size(); i++) {
                cout << "vermelho P " << ordem["vermelho"]['P'][i] << "\n";
            }
        }
        if(!ordem["vermelho"]['M'].empty()) {
            for(int i = 0; i < ordem["vermelho"]['M'].size(); i++) {
                cout << "vermelho M " << ordem["vermelho"]['M'][i] << "\n";
            }
        }
        if(!ordem["vermelho"]['G'].empty()) {
            for(int i = 0; i < ordem["vermelho"]['G'].size(); i++) {
                cout << "vermelho G " << ordem["vermelho"]['G'][i] << "\n";
            }
        }
    }
}
