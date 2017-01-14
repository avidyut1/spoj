//
// Created by Ashesh Vidyut on 14/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(true) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == 0 && a[1] == 0 && a[2] == 0) {
            break;
        }
        if (2 * a[1]  == a[0] + a[2]) {
            cout << "AP " << a[2] + a[1]  - a[0] << endl;
        }
        else {
            cout << "GP " << a[2] * (a[1] / a[0]) << endl;
        }
    }
    return 0;
}
