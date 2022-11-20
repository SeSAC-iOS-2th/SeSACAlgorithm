//
//  BJ2606.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, M;
//vector<int> v[101];
//bool check[101];
//queue<int> q;
//
//int bfs(int start) {
//    check[start] = true;
//    int visit_count = 0;
//    q.push(start);
//    while(q.size()) {
//        visit_count++;
//        int here = q.front();
//        q.pop();
//        for(int i = 0; i < v[here].size(); i++) {
//            int next = v[here][i];
//            if(check[next] == false) {
//                check[next] = true;
//                q.push(next);
//            }
//        }
//    }
//
//    return visit_count - 1;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//    cin >> M;
//
//    while(M--) {
//        int a, b;
//        cin >> a >> b;
//
//        v[a].push_back(b);
//        v[b].push_back(a);
//    }
//
//    cout << bfs(1) << '\n';
//
//    return 0;
//}
