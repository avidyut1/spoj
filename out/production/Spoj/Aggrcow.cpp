//
// Created by Ashesh Vidyut on 17/01/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <stdlib.h>
#include <queue>
using namespace std;
int t, n, c;
long int x[1000001];
bool ok (long int m) {
    long int nextind = x[0] + m;
    int count = 1;
    for (int i = 0; i < n; ++i) {
        if (x[i] >= nextind) {
            nextind = x[i] + m;
            count++;
            if (count == c)
                return true;
        }
    }
    return count == c;
}
int main() {
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> c;
        for (int j = 0; j < n; ++j) {
            cin >> x[j];
        }
        sort(x, x + n);
        long int low = 1;
        long int ans = 1000000000;
        long int high = 1000000000;
        while(low < high) {
            long int mid = (low + high) / 2;
            if (ok(mid)){
                low = mid + 1;
                ans = mid;
            }
            else {
                high = mid;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

