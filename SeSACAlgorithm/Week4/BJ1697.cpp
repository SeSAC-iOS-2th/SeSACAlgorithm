//
//  BJ1697.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, K;
//int dist[100001];
//queue<int> q;
//
//void initDist() {
//    for(int i = 0; i < 100001; i++) {
//        dist[i] = -1;
//    }
//}
//
//bool checkValid(int x) {
//    return (x >= 0 && x <= 100000);
//}
//
//int bfs() {
//    if (N == K) { return 0;}
//
//    initDist();
//    dist[N] = 0;
//    q.push(N);
//    int result = 0;
//
//    while(q.size()) {
//        int here = q.front();
//        q.pop();
//        for(int i = 0; i < 3; i++) {
//            int next;
//            if (i == 0) {
//                next = here - 1;
//            } else if (i == 1) {
//                next = here + 1;
//            } else {
//                next = here * 2;
//            }
//            if (checkValid(next) == false) { continue; }
//
//            if (dist[next] == -1) {
//                dist[next] = dist[here] + 1;
//                if (next == K) {
//                    result = next;
//                    break;
//                }
//                q.push(next);
//            }
//        }
//    }
//
//    return dist[result];
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N >> K;
//
//    cout << bfs() << '\n';
//
//    return 0;
//}
