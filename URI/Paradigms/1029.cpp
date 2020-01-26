//Fibonacci, Quantas Chamadas?
//Assunto: Recurssão
#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int calls;

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    calls += 2;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, ans;

    cin >> t;
    loop(test, 0, t) {
        cin >> n;
        calls = 0;
        ans = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, calls, ans);
    }
}
