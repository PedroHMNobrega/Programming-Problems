//Matring
//Assunto: ASCII;
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string l1, l2, l3, l4, aux, ans;
    int codigo, f, l, a;
    vector<int> nums;

    cin >> l1 >> l2 >> l3 >> l4;
    for(int i = 0; i < l1.size(); i++) {
        aux = "";
        if(i == 0) {
            aux += l1[0]; aux += l2[0]; aux += l3[0]; aux += l4[0]; 
            f = stoi(aux);
        } else if(i == l1.size()-1) {
            aux += l1[i]; aux += l2[i]; aux += l3[i]; aux += l4[i]; 
            l = stoi(aux);
        } else {
            aux += l1[i]; aux += l2[i]; aux += l3[i]; aux += l4[i]; 
            nums.pb(stoi(aux));
        }
    }
    ans = "";
    for(auto x: nums) ans += (char)((f * x + l) % 257);
    cout << ans << "\n";
}
