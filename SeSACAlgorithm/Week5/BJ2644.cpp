//
//  BJ2644.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int n, m;
//int a, b;
//vector<int> v[101];
//bool check[101];
//int dist[101];
//queue<int> q;
//int cnt = 0;
//
//int bfs(int node, int goal) {
//    for(int i = 0; i < 101; i++) {
//        dist[i] = -1;
//    }
//
//    dist[node] = 0;
//    q.push(node);
//
//    while(q.size()) {
//        int here = q.front();
//        q.pop();
//        for(int i = 0; i < v[here].size(); i++) {
//            int next = v[here][i];
//            if (dist[next] == -1) {
//                q.push(next);
//                dist[next] = dist[here] + 1;
//            }
//        }
//    }
//
//    return dist[goal];
//}
//
//
//int main(int argc, const char* argv[]) {
//
//    cin >> n;
//    cin >> a >> b;
//    cin >> m;
//
//    while(m--) {
//        int x, y;
//        cin >> x >> y;
//
//        v[x].push_back(y);
//        v[y].push_back(x);
//    }
//
//
//    cout << bfs(a, b) << '\n';
//
//    return 0;
//}
