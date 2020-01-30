//Pedra-papel-tesoura-lagarto-Spock
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

void s() {
    cout << "sheldon\n";
}

void r() {
    cout << "rajesh\n";
}

void e() {
    cout << "empate\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    string s1, s2;

    cin >> n;
    while(n--) {
        cin >> s1 >> s2;
        if(s1 == "tesoura") {
            if(s2 == "tesoura") e();
            else if(s2 == "papel") r();
            else if(s2 == "pedra") s();
            else if(s2 == "spock") s();
            else if(s2 == "lagarto") r();
        } else if(s1 == "papel") {
            if(s2 == "tesoura") s();
            else if(s2 == "papel") e();
            else if(s2 == "pedra") r();
            else if(s2 == "spock") r();
            else if(s2 == "lagarto") s();
        } else if(s1 == "pedra") {
            if(s2 == "tesoura") r();
            else if(s2 == "papel") s();
            else if(s2 == "pedra") e();
            else if(s2 == "spock") s();
            else if(s2 == "lagarto") r();
        } else if(s1 == "lagarto") {
            if(s2 == "tesoura") s();
            else if(s2 == "papel") r();
            else if(s2 == "pedra") s();
            else if(s2 == "spock") r();
            else if(s2 == "lagarto") e();
        } else if(s1 == "spock") {
            if(s2 == "tesoura") r();
            else if(s2 == "papel") s();
            else if(s2 == "pedra") r();
            else if(s2 == "spock") e();
            else if(s2 == "lagarto") s();
        }
    }
}
