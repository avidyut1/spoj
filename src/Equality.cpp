//
// Created by Ashesh Vidyut on 22/01/17.
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
    int tc, n;
    cin >> tc;
    for (int i = 0; i < tc; ++i) {
        cin >> n;
        long long int a[n];
        long long int sum = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            sum += a[j];
        }
        long long x[n];
        for (int i = 0; i < n; ++i) {
            x[i] = (sum - ((n - 1) * a[i])) / (n - 1);
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}