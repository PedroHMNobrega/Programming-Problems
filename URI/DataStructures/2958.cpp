//O Rolê Bad Vibes
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    vector<char> v;
    vector<char> d;
    string ele;
    
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ele;
            if(ele[1] == 'D') {
                d.push_back(ele[0]);
            } else {
                v.push_back(ele[0]);
            }
        }
    }

    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "V\n";
    }
    for(int i = 0; i < d.size(); i++) {
        cout << d[i] << "D\n";
    }
}
