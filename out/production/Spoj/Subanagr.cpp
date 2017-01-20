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
#include <climits>
using namespace std;
int min(int a, int b){
    if (a < b)
        return a;
    return b;
}
int main() {
    int n;
    cin >> n;
    int freq[n][26];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            freq[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            freq[i][s[j] - 'a']++;
        }
    }
    bool ans = false;
    for (int i = 0; i < 26; ++i) {
        int minval = INT_MAX;
        for (int j = 0; j < n; ++j) {
            minval = min(freq[j][i], minval);
        }
        for (int j = 0; j < minval; ++j) {
            ans = true;
            cout << (char)('a' + i);
        }
    }
    if (!ans) {
        cout << "no such string";
    }
    return 0;
}

