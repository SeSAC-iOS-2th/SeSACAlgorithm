//
//  BJ2178.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, M;
//int arr[101][101];
//int dist[101][101];
//
//struct pos {
//    int y, x;
//};
//
//queue<pos> q;
//
//void initDist() {
//    for(int i = 1; i < 101; i++) {
//        for(int j = 1; j < 101; j++) {
//            dist[i][j] = -1;
//        }
//    }
//}
//
//
//int bfs() {
//    initDist();
//    dist[1][1] = 1;
//    q.push({1,1});
//
//    while(q.size()) {
//
//        pos here = q.front();
//        q.pop();
//
//        int dx[4] = {0, 0, -1, 1};
//        int dy[4] = {-1, 1, 0, 0};
//
//        pos next;
//
//        for(int i = 0; i < 4; i++) {
//            next.y = here.y + dy[i];
//            next.x = here.x + dx[i];
//
//            if (next.y >= 1 && next.y <= N && next.x >= 1 && next.x <= M) {
//
//                if (dist[next.y][next.x] == -1 && arr[next.y][next.x] == 1) {
//                    dist[next.y][next.x] = dist[here.y][here.x] + 1;
//                    q.push(next);
//                }
//            }
//        }
//    }
//
//    return dist[N][M];
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N >> M;
//
//
//    for(int i=1; i<=N; i++){
//        for(int j=1; j<=M; j++){
//            char x;
//            cin >> x;
//            if(x == '1') { arr[i][j] = 1; }
//        }
//    }
//
//    cout << bfs() << '\n';
//
//    return 0;
//}
