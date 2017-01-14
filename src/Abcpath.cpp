//
// Created by Ashesh Vidyut on 14/01/17.
//
#include <iostream>
#include <stdio.h>
using namespace std;

int h, w;
int ans = 0;
char a[100][100];
bool v[100][100];
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
void dfs(int i, int j, int lans) {
    if (v[i][j]) {
        return;
    }
    lans++;
    ans = max(ans, lans);
    char ij = a[i][j];
    v[i][j] = true;
    if (i + 1 < h && a[i + 1][j] == (char) ((int)ij + 1)) {
        dfs(i + 1, j, lans);
    }
    if (i - 1 >=0 && a[i - 1][j] == (char) ((int)ij + 1)) {
        dfs(i - 1, j, lans);
    }
    if (j + 1 < w && a[i][j + 1] == (char) ((int)a[i][j] + 1)) {
        dfs(i, j + 1, lans);
    }
    if (j - 1 >= 0 && a[i][j - 1] == (char) ((int)ij + 1)) {
        dfs(i, j - 1, lans);
    }
    if (i + 1 < h && j + 1 < w  && a[i + 1][j + 1] == (char) ((int)ij + 1)) {
        dfs(i + 1, j + 1, lans);
    }
    if (i + 1 < h && j - 1 >= 0  && a[i + 1][j - 1] == (char) ((int)ij + 1)) {
        dfs(i + 1, j - 1, lans);
    }
    if (i - 1 >= 0 && j + 1 < w  && a[i - 1][j + 1] == (char) ((int)ij + 1)) {
        dfs(i - 1, j + 1, lans);
    }
    if (i - 1 >= 0 && j - 1 >= 0  && a[i - 1][j - 1] == (char) ((int)ij + 1)) {
        dfs(i - 1, j - 1, lans);
    }
}
int main(){
    int tc = 0;
    while(true) {
        tc++;
        scanf("%d", &h);
        scanf("%d", &w);
        if (h == 0 && w == 0)
            break;
        ans = 0;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> a[i][j];
                v[i][j] = false;
            }
        }
        for (int k = 0; k < h; ++k) {
            for (int i = 0; i < w; ++i) {
                if (a[k][i] == 'A')
                    dfs(k, i, 0);
            }
        }
        cout << "Case " <<  tc << ": " << ans << endl;
    }
    return 0;
}