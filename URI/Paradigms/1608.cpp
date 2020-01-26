//Bolos da Maria
//Assunto: Greedy
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

int t, d, i, b, qi, ig, ip, price, priceT;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    cin >> t;
    loop(test, 0, t) {
        cin >> d >> i >> b;
        vector<int> ingredientes(i);
        priceT = 1000000005;
        loop(j, 0, i) {
            cin >> ingredientes[j];
        }
        loop(j, 0, b) {
            cin >> qi;
            price = 0;
            loop(j2, 0, qi) {
                cin >> ig >> ip;
                price += ingredientes[ig] * ip; 
            }
            priceT = min(priceT, price);
        }
        cout << d/priceT << "\n";
    }
}
