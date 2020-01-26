//Aposta com Noel
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int GCDsimp(int num, int den) {
	if (den > 0) {
		return GCDsimp(den, num % den);
	}
	return num;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int num, den, cont = 0;
    vector<int> apostas;
	while(cin >> num >> den) {
        apostas.pb(GCDsimp(num,den));
        if(apostas[cont] > 5)
            cout << "Noel\n";
        else
            cout << "Gnomos\n";
        cont++;
	}
	for(int i = cont-1; i >= 0; i--) {
		cout << apostas[i] << " ";
	} cout << "\n";
}
