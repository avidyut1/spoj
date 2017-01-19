//
// Created by Ashesh Vidyut on 18/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <stdlib.h>
#include <queue>
using namespace std;
int main() {
    int tc, n, k;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n >> k;
        if (k == 1) {
            cout << 1 << endl;
            continue;
        }
        if (n /2 < k) {
            cout << -1 << endl;
            continue;
        }
        int tmp = 2;
        for (int i = 0; i < k; ++i) {
            cout << tmp << " ";
            tmp+=2;
        }
        cout << endl;
    }
    return 0;
}

