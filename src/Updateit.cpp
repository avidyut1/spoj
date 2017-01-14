//
// Created by Ashesh Vidyut on 14/01/17.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;
void update(int bit[], int n, int val, int ind) {
    for (int i = ind; i < n; i += (i & -i)) {
        bit[i] += val;
    }
}
int query (int bit[], int n, int ind) {
    int sum = 0;
    for (int i = ind; i >= 1; i-= (i & -i)) {
        sum += bit[i];
    }
    return sum;
}
int main(){
    int tc, n, u, q;
    scanf("%d", &tc);
    for (int k = 0; k < tc; ++k) {
        cin >> n;
        int bit[n + 1];
        for (int m = 0; m < n + 1; ++m) {
            bit[m] = 0;
        }
        scanf("%d", &u);
        for (int i = 0; i < u; ++i) {
            int l, r, val;
            scanf("%d", &l);
            scanf("%d", &r);
            scanf("%d", &val);
            update(bit, n + 1, val, l + 1);
            update(bit, n + 1, -val, r + 2);
        }
        scanf("%d", &q);
        for (int j = 0; j < q; ++j) {
            int ind;
            cin >> ind;
            ind++;
            int res = query(bit, n + 1, ind);
            printf("%d\n", res);
        }
    }
    return 0;
}

