//
//  BJ25418.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int A, K;
//int dist[1000001];
//int result;
//queue<int> q;
//
//
//bool validCheck(int num) {
//    return (num > 1000000) ? true : false;
//}
//
//int bfs() {
//    memset(dist, -1, sizeof dist);
//    q.push(A);
//    dist[A] = 0;
//    while(q.size()) {
//        int here = q.front();
//        q.pop();
//        for(int i = 0; i < 2; i++) {
//            int next;
//            if (i == 0) { next = here + 1; }
//            else { next = here * 2; }
//            
//            if (validCheck(next) == true) { continue; }
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
//    return dist[result];
//}
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> A >> K;
//    
//    cout << bfs() << '\n';
//    
//    return 0;
//}
