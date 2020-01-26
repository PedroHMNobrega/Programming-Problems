//Converter Quilômetros para Milhas
//Assunto: Greedy/ Math
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;

int t, x, ans, k, iF;
const int n = 23;
int fib[n];

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    fib[1] = 1;
    fib[2] = 2;
    loop(i, 3, n) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> t;
    while(t--) {
        vector<int> nums;
        cin >> x;
        for(int i = 22; i >= 1; i--) {
            if(x - fib[i] >= 0) {
                x -= fib[i];
                nums.pb(i-1);
            }  
        } 
        ans = 0;
        for(int i = 0; i < nums.size();i++) {
            ans += fib[nums[i]];
        }
        cout << ans << "\n";   
    }
}
