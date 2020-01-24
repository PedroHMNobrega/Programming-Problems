//Organizador de Vagões:
//Assunto: Número de inversões/ Bubble Sort
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, tamanho, ans;
    cin >> n;
    for(int test = 0; test < n; test++) {
        cin >> tamanho;
        int vag[tamanho];
        ans = 0;
        for(int i = 0; i < tamanho; i++) {
            cin >> vag[i];
        }
        
        for(int i = 0; i < tamanho; i++) {
            for(int j = 0; j < tamanho - 1; j++) {
                if(vag[j] > vag[j + 1]) {
                    swap(vag[j], vag[j + 1]);
                    ans++;     
                }
            }
        }
        cout << "Optimal train swapping takes " << ans << " swaps.\n";
    }
}   
