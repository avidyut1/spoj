//
// Created by Ashesh Vidyut on 20/01/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <stdlib.h>
#include <queue>
using namespace std;
int max(int a, int b) {
    return a > b ? a : b;
}
int max(int a, int b, int c) {
    return max(a, max(b, c));
}
int main() {
    int tc, n;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n;
        long long ans[n];
        ans[0] = 3;
        ans[1] = 9;
        for (int i = 2; i < n; ++i) {
            ans[i] = 2 * ans[i - 1] + ans[i - 2];
        }
        cout << ans[n - 1] << endl;
    }
    return 0;
}