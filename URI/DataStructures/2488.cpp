//É Na Batida do Cavalo!
//Assunto: Map/Distância entre dois pontos
#include <bits/stdc++.h>
using namespace std;

double distancia(int x1, int y1, int x2, int y2) {
    double dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return dist;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p, q, x1, y1, x2, y2, x1A, y1A, p1, p2;
    double maxi;
    cin >> p >> q;
    map<pair<int, int>, int> pontos;
    vector<double> dists;
    for(int i = 0; i < p; i++) {
        cin >> x1 >> y1;
        pontos[{x1, y1}] = i; 
        if(i > 0) {
            dists.push_back(distancia(x1A, y1A, x1, y1));
        }
        x1A = x1, y1A = y1;
    }

    for(int i = 0; i < q; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        p1 = min(pontos[{x1, y1}], pontos[{x2, y2}]);
        p2 = max(pontos[{x1, y1}], pontos[{x2, y2}]);
        maxi = 0;
        for(int i = p1; i < p2; i++) {
            if(dists[i] > maxi) {
                maxi = dists[i];
            }
        }
        printf("%.2f\n", maxi);
    }
}
