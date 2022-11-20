//
//  BJ11724.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, M;
//vector<int> v[1010];
//bool check[1010];
//queue<int> q;
//
//void bfs(int start) {
//    check[start] = true;
//    q.push(start);
//    
//    while(q.size()) {
//        int here = q.front();
//        q.pop();
//        for(int i = 0; i < v[here].size(); i++) {
//            int next = v[here][i];
//            if (check[next] == false) {
//                check[next] = true;
//                q.push(next);
//            }
//        }
//    }
//}
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N >> M;
//    int result = 0;
//    
//    while(M--) {
//        int a, b;
//        cin >> a >> b;
//        
//        v[a].push_back(b);
//        v[b].push_back(a);
//    }
//    
//    for(int i = 1; i <= N; i++) {
//        if (check[i] == false) {
//            bfs(i);
//            result++;
//        }
//    }
//    
//    cout << result << '\n';
//    
//    return 0;
//}
