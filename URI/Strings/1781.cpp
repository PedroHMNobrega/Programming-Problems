//Guga e a String
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

int tamS, tamV, tamC;

void printS(vector<char> &vog, vector<char> &cons, vector<bool> &posVC, int i, int j) {
    bool x;
    loop(k, 0, tamS) {
        x = posVC[k];
        if(x) {
            cout << vog[i];
            i++;
        } else {
            cout << cons[j];
            j++;
        }
        if(tamV > 0) i %= tamV;
        if(tamC > 0) j %= tamC;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t, q, a, b, i, j;
    string s;

    cin >> t;
    loop(caso, 1, t+1) {
        vector<bool> posVC;
        vector<char> vog, cons;
        cin >> s;
        for(auto x: s) {
            if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') {
                posVC.pb(true);
                vog.pb(x);
            }
            else {
                posVC.pb(false);
                cons.pb(x);
            }
        }
        cin >> q;
        cout << "Caso #" << caso << ":\n";
        i = j = 0;
        tamV = vog.size();
        tamC = cons.size();
        tamS = tamC + tamV;
        while(q--) {
            cin >> a;
            if(a == 0) {
                cin >> b;
                if(tamV > 0) {
                    b %= tamV;
                    i -= b;
                    if(i < 0) i = tamV - abs(i);
                }
            } else if(a == 1) {
                cin >> b;
                if(tamC > 0) {
                    b %= tamC;
                    j -= b;
                    if(j < 0) j = tamC - abs(j);
                }
            } else printS(vog, cons, posVC, i, j);
        }
    }
}
