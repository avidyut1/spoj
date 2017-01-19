//
// Created by Ashesh Vidyut on 18/01/17.
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
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (i - 3 >= 0) {
                if ((s[i] == '?' || s[i] == 'F') && (s[i - 1] == '?' || s[i - 1] == 'E') && (s[i - 2] == '?' || s[i - 2] == 'H') && (s[i - 3] == '?' || s[i - 3] == 'C')) {
                    s[i - 3] = 'C';
                    s[i - 2] = 'H';
                    s[i - 1] = 'E';
                    s[i] = 'F';
                }
                else {
                    if (s[i] == '?') {
                        s[i] = 'A';
                    }
                }
            }
            else{
                if (s[i] == '?') {
                    s[i] = 'A';
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
