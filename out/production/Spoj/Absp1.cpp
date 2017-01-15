//
// Created by Ashesh Vidyut on 14/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main() {
    int tc, n;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin >> ar[i];
        }
        int back[n];
        back[n - 1] = ar[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            back[i] = ar[i];
            back[i] += back[i + 1];
        }
        long long ans = 0;
        for (int j = 0; j < n - 1; ++j) {
            ans += abs(ar[j] * (n - j - 1) - back[j + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
