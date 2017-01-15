//
// Created by Ashesh Vidyut on 15/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
    int tc, a, b, k;
    int MAX = (int)1e5 + 1;
    int df[MAX];
    bool prime[MAX];
    for (int l = 0; l < MAX; ++l) {
        prime[l] = true;
        df[l] = 0;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 0; i < MAX; ++i) {
        if (prime[i]) {
            df[i] = 1;
            for (int j = 2 * i; j < MAX; j+=i) {
                df[j]++;
                prime[j] = false;
            }
        }
    }
    int cummulativeRes[MAX][6];
    if (df[0] <= 5) {
        cummulativeRes[0][df[0]]++;
    }
    for (int m = 1; m < MAX; ++m) {
        for (int i = 0; i < 6; ++i) {
            cummulativeRes[m][i] += cummulativeRes[m - 1][i];
        }
        if (df[m] <= 5) {
            cummulativeRes[m][df[m]]++;
        }
    }
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> a >> b >> k;
        if (a - 1 >= 0) {
            cout << cummulativeRes[b][k] - cummulativeRes[a - 1][k] << endl;
        }
        else {
            cout << cummulativeRes[b][k] << endl;
        }
    }
    return 0;
}