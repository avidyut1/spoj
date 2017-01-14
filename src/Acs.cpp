//
// Created by Ashesh Vidyut on 14/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//TLE - TODO
using namespace std;
int mat[1234][5678];
void swap(int x, int y, bool v) {
    if (v) {
        for (int i = 0; i < 5678; ++i) {
            int temp = mat[x][i];
            mat[x][i] = mat[y][i];
            mat[y][i] = temp;
        }
    }
    else {
        for (int i = 0; i < 1234; ++i) {
            int temp = mat[i][x];
            mat[i][x] = mat[i][y];
            mat[i][y] = temp;
        }
    }
}
int main() {
    int val = 1;
    for (int i = 0; i < 1234; ++i) {
        for (int j = 0; j < 5678; ++j) {
            mat[i][j] = val++;
        }
    }
    char op;
    int x, y, z;
    while(cin >> op) {
        switch(op){
            case 'R': cin >> x >> y;
                    swap(x - 1, y - 1, true); break;
            case 'C': cin >> x >> y;
                    swap(x - 1, y - 1, false); break;
            case 'Q': cin >> x >> y;
                    cout << mat[x - 1][y - 1];
                    cout << endl;
                    break;
            case 'W': cin >> z;
                for (int i = 0; i < 1234; ++i) {
                    for (int j = 0; j < 5678; ++j) {
                        if (mat[i][j] == z) {
                            cout << (i + 1) << " " << (j + 1);
                            break;
                        }
                    }
                }
                cout << endl;
                break;
        }
    }
    return 0;
}
