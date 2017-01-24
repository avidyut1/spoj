//
// Created by Ashesh Vidyut on 24/01/17.
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
    int tc, n, m;
    priority_queue<int> pq[101];
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n;
        cin >> m;
        int p[m];
        for (int i = 0; i < m; ++i) {
            cin >> p[i];
        }
        int num;
        for (int i = 0; i < n; ++i) {
            cin >> num;
            for (int j = 0; j < num; ++j) {
                int temp;
                cin >> temp;
                pq[i].push(temp);
            }
        }
        long long int ans = 0l;
        for (int i = 0; i < m; ++i) {
            if (pq[p[i]].size() > 0) {
                ans += pq[p[i]].top();
                pq[p[i]].pop();
            }
        }
        cout << ans << endl;
        for (int k = 0; k < 101; ++k) {
            while(pq[k].size() != 0) {
                pq[k].pop();
            }
        }
    }
    return 0;
}
