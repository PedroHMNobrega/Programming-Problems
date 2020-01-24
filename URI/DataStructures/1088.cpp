//Bolhas e Baldes:
//Assunto: Número de inversões/BIT
#include <bits/stdc++.h>
#define PB push_back
using namespace std;

int sum(vector<int> &bit, int k) {
	int s = 0;
	while(k >= 1) {
		s += bit[k-1];
		k -= k & -k;
	}
	return s;
}

void add(vector<int> &bit, int n, int k, int x) {
	while(k <= n) {
		bit[k-1] += x;
		k += k & -k;
	}
}

int inv(vector<int> array, int n) {
	int count = 0;
	int maxE = 0;
	for(int i = 0; i < n; i++) {
		if(maxE < array[i]) {
			maxE = array[i];
		}
	}
	vector<int> bit(maxE, 0);
	for(int i = n - 1; i >= 0; i--) {
		count += sum(bit, array[i] - 1);
		add(bit, maxE, array[i], 1);
	}
	return count;
}

int main() {
    int qnt, ans;

    while(true) {
        cin >> qnt;
        if(qnt == 0) break;

        vector<int> lista(qnt);
        for(int i = 0; i < qnt; i++) {
            cin >> lista[i];  
        }
        ans = inv(lista, qnt);
        if(ans % 2 == 0) {
            cout << "Carlos\n";
        } else {
            cout << "Marcelo\n";
        }

    }
}
