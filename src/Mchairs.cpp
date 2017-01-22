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
int MOD = (int)1e9 + 7;
long long int binPow(int a, long long b) {
    if (b == 0) {
        return 1l;
    }
    if (b % 2 == 1) {
        return ((binPow(a, b - 1) % MOD) * (a % MOD)) % MOD;
    }
    long long int res = binPow(a, b / 2) % MOD;
    return ((res % MOD) * (res % MOD)) % MOD;

}
int main() {
    int tc;
    long long n;
    cin >> tc;
    for (int i = 0; i < tc; ++i) {
        cin >> n;
        cout << binPow(2, n) - 1 << endl;
    }
    return 0;
}

