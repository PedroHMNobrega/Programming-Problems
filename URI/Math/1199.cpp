//Conversão Simples de Base
//Assunto: Conversão de Bases;
#include<bits/stdc++.h>
#include<stdlib.h>
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
#define MAX 10005
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

string num;
int num2;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> num and num[0] != '-') {
        if(num.size() < 2 or num[1] != 'x') {
            num2 = stoi(num);
            printf("0x%X\n", num2);
        } else {
            printf("%d\n", stoi(num, 0, 16));
        }
    }
}
