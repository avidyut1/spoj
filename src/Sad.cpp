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
long max(long long a, long long b) {
    if (a > b)
        return a;
    return b;
}
long min(long long a, long long b) {
    if (a > b)
        return b;
    return a;
}
int main() {
    int r, c;
    cin >> r >> c;
    long long mat[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> mat[i][j];
        }
    }
    long long smallrow[r];
    long long largestcol[c];
    long long maxval = (long long)1e8 + 1;
    long long minval = -1;
    for (int l = 0; l < r; ++l) {
        smallrow[l] = maxval;
    }
    for (int l = 0; l < c; ++l) {
        largestcol[l] = minval;
    }
    for (int k = 0; k < r; ++k) {
        for (int i = 0; i < c; ++i) {
            smallrow[k] = min(smallrow[k], mat[k][i]);
        }
    }
    for (int i1 = 0; i1 < c; ++i1) {
        for (int i = 0; i < r; ++i) {
            largestcol[i1] = max(largestcol[i1], mat[i][i1]);
        }
    }
    int count = 0;
    long long val = -7;
    vector<long long> req;
    for (int m = 0; m < r; ++m) {
        for (int i = 0; i < c; ++i) {
            if (mat[m][i] == largestcol[i] && mat[m][i] == smallrow[m]) {
                val = mat[m][i];
                req.push_back(mat[m][i]);
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "GUESS" << endl;
    }
    else if(count == 1) {
        cout << val << endl;
    }
    else {
        sort(req.begin(), req.end());
        if (req[0] == req[req.size() - 1]) {
            cout << req[0] << endl;
        }
        else {
            cout << "GUESS" << endl;
        }
    }
    return 0;
}

