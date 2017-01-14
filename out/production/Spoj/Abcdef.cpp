#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    vector<int> r1, r2;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < n; ++k) {
                r1.push_back(ar[j] * ar[i] + ar[k]);
            }
        }
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < n; ++k) {
                if (ar[k] == 0)
                    continue;
                r2.push_back((ar[j] + ar[i]) * ar[k]);
            }
        }
    }
    sort(r1.begin(), r1.end());
    sort(r2.begin(), r2.end());
    long ans = 0;
    for (int l = 0; l < r1.size(); ++l) {
        int low = lower_bound(r2.begin(), r2.end(), r1[l]) - r2.begin();
        int high = upper_bound(r2.begin(), r2.end(), r1[l]) - r2.begin();
        ans += high - low;
    }
    cout << ans;
    return 0;
}