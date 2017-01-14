//
// Created by Ashesh Vidyut on 14/01/17.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    while(true) {
        char c[5001];
        cin >> c;
        if (c[0] == '0') {
            break;
        }
        int len = strlen(c);
        int dp[len];
        dp[0] = 1;
        for (int i = 1; i < len; ++i) {
            dp[i] = dp[i - 1];
            char sub[2];
            int k = 0;
            for (int j = i - 1; j <= i; ++j) {
                sub[k++] = c[j];
            }
            if (atoi(sub) <= 26) {
                dp[i] += dp[i - 2];
            }
        }
        for (int l = 0; l < len; ++l) {
            cout << dp[l] << endl;
        }
        cout << dp[len - 1] << endl;
    }
    return 0;
}