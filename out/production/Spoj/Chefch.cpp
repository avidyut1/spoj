//
// Created by Ashesh Vidyut on 19/01/17.
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
int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        bool f = true;
        string pat = "+-";
        int lans = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (f) {
                if (s[j] != pat[0]) {
                    lans++;
                }
            }
            else {
                if (s[j] != pat[1]) {
                    lans++;
                }
            }
            f = !f;
        }
        pat = "-+";
        f = true;
        int lans2 = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (f) {
                if (s[j] != pat[0]) {
                    lans2++;
                }
            }
            else {
                if (s[j] != pat[1]) {
                    lans2++;
                }
            }
            f = !f;
        }
        if (lans > lans2) {
            cout << lans2 << endl;
        }
        else {
            cout << lans << endl;
        }
    }
    return 0;
}
