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

bool overlucky(int n) {
    std::string s = std::to_string(n);
    int count_not_lucky = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '4' || s[i] == '7') {
            continue;
        }
        count_not_lucky++;
    }
    if (count_not_lucky == s.length()) {
        return false;
    }
    return true;
}
int main() {
    int tc, n;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n;
        int ans = 0;
        for (int i = 1; i * i <= n; ++i) {
            if(n % i == 0) {
                int fd = i;
                int sd = n / i;
                if (overlucky(fd)) {
                    ans++;
                }
                if (fd != sd && overlucky(sd)) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

