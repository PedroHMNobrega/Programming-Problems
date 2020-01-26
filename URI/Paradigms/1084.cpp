//Apagando e Ganhando
//Assunto: Stack
#include <bits/stdc++.h>
#define MAX 100100
using namespace std;

int main() {
    char pilha[MAX], num;
    int n, d, k, ap, i;

    while(scanf("%d%d", &n, &d) && (n+d)){  
        ap = 0;
        for(i = 0, k = -1; i < n; i++){
            scanf(" %c", &num);
            while(k > -1 && ap < d && num > pilha[k]) {
                k--;
                ap++;
            }
            if(k+1 < n - d) {
                pilha[++k] = num;
            }
        }
        pilha[++k] = '\0';
        printf("%s\n", pilha);
    }
}     
