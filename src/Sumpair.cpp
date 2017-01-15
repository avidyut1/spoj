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
    int tc, n, d;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n >> d;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        long long sum = 0l;
        for (int j = n - 1; j > 0; --j) {
            if (ar[j] - ar[j - 1] < d) {
                sum += ar[j] + ar[j - 1];
                j--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
