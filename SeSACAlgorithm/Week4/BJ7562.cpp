//
//  BJ7562.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//int length;
//
//struct pos {
//    int x, y;
//};
//
//pos startPos;
//pos endPos;
//
//int dist[301][301];
//queue<pos> q;
//
//void initDist() {
//    for(int i = 0; i < 301; i++) {
//        for(int j = 0; j < 301; j++) {
//            dist[i][j] = -1;
//        }
//    }
//}
//
//bool checkValid(int x, int y) {
//    return (0 <= x && x <= length - 1 && 0 <= y && y <= length - 1);
//}
//
//int bfs() {
//    initDist();
//    dist[startPos.x][startPos.y] = 0;
//    q.push({startPos.x, startPos.y});
//
//    while(q.size()) {
//
//        pos here = q.front();
//        q.pop();
//
//        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
//        int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
//
//        pos next;
//
//        for(int i = 0; i < 8; i++) {
//            next.x = here.x + dx[i];
//            next.y = here.y + dy[i];
//
//            if (checkValid(next.x, next.y) && dist[next.x][next.y] == -1) {
//                dist[next.x][next.y] = dist[here.x][here.y] + 1;
//                q.push({next.x, next.y});
//            }
//        }
//    }
//    return dist[endPos.x][endPos.y];
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//
//    while(N--) {
//
//        int l;
//        cin >> l;
//        length = l;
//
//        int startX, startY;
//        cin >> startX >> startY;
//        startPos.x = startX;
//        startPos.y = startY;
//
//        int endX, endY;
//        cin >> endX >> endY;
//        endPos.x = endX;
//        endPos.y = endY;
//
//        cout << bfs() << '\n';
//    }
//
//    return 0;
//}
