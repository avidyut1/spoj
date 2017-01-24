//
// Created by Ashesh Vidyut on 22/01/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <stdlib.h>
#include <climits>
#include <queue>
#define min(a, b) a > b ? b : a;
using namespace std;

int main() {
    int tc, n, k;
    cin >> tc;
    for (int i = 0; i < tc; ++i) {
        cin >> n >> k;
        int ar[n];
        for (int j = 0; j < n; ++j) {
            cin >> ar[j];
        }
        int minval = INT_MAX;
        for (int l = 0; l < n; ++l) {
            for (int j = l + 1; j < n; ++j) {
                if (l == j)
                    continue;
                int val = abs(ar[l] + ar[j] - k);
                minval = min(val, minval);
            }
        }
        int ans = 0;
        for (int l = 0; l < n; ++l) {
            for (int j = l + 1; j < n; ++j) {
                if (l == j)
                    continue;
                int val = abs(ar[l] + ar[j] - k);
                if (val == minval) {
                    ans++;
                }
            }
        }
        cout << minval << " " << ans << endl;
    }
    return 0;
}