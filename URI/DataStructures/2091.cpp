//Número Solitário
//Assunto: Ordenação
#include <bits/stdc++.h>
using namespace std;

long long int veri(vector<long long int> &nums, int n) {
    sort(nums.begin(), nums.end());
    long long int ante = nums[0];
    int swtc = 1;
    for(int i = 1; i < n; i++) {
        if(swtc == 1 and nums[i] != ante) {
            return nums[i-1];
        } else {
            if(nums[i] == ante) {
                swtc++;
            } else{
                if(swtc % 2 == 0) {
                    swtc = 1;
                    ante = nums[i];
                } else {
                    return nums[i-1];
                }
            }
        }
    }
    return nums[n-1];
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long int ans;

    while(true) {
        cin >> n;
        if(n == 0) break;
        vector<long long int> nums(n);
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        ans = veri(nums, n);
        cout << ans << "\n";
    }
}
