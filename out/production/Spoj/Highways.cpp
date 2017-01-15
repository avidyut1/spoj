//
// Created by Ashesh Vidyut on 15/01/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;

struct Distkey{
    int dist;
    int key;
};
class Comparator{
public:
    bool operator()(Distkey& d1, Distkey& d2) {
        return d1.dist < d2.dist;
    }
};
int main() {
    int tc, n, m, s, e;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n >> m >> s >> e;
        s--; e--;
        vector<pair<int, int> > g[100000];
        for (int i = 0; i < m; ++i) {
            int u, v, t;
            cin >> u >> v >> t;
            u--;v--;
            g[u].push_back(make_pair(v, t));
            g[v].push_back(make_pair(u, t));
        }
        priority_queue<Distkey, vector<Distkey>, Comparator> pq;
        Distkey ds;
        ds.dist = 0;
        ds.key = s;
        pq.push(ds);
        int dist[n];
        int inf = (int)1e6;
        for (int j = 0; j < n; ++j) {
            dist[j] = inf;
        }
        dist[s] = 0;
        bool v[n];
        while(pq.size() != 0) {
            Distkey dk = pq.top();
            pq.pop();
            if (v[dk.key]) {
                continue;
            }
            v[dk.key] = true;
            for (int i = 0; i < g[dk.key].size(); ++i) {
                pair<int, int> p = g[dk.key][i];
                if (dist[p.first] > dist[dk.key] + p.second) {
                    dist[p.first] = dist[dk.key] + p.second;
                    Distkey ns;
                    ns.key = p.first;
                    ns.dist = dist[p.first];
                    pq.push(ns);
                }
            }
        }
        if (dist[e] == inf) {
        	cout << "NONE" << endl;
        	continue;
        }
        cout << dist[e] << endl;
    }
    return 0;
}

