//
//  BJ1707.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int K;
//
//vector<int> v[1010];
//int check[1010];
//vector<int> cycle;
//bool flag;
//
//void clear(){
//    for(int i=1; i<=1000; i++){
//        v[i].clear();
//        check[i] = 0;
//    }
//    flag = true;
//}
//
//void dfs(int node, int id) {
//
//    check[node] = id;
//
//    for(int i = 0; i < v[node].size(); i++) {
//        int next = v[node][i];
//        if(check[next] == 0) {
//            dfs(next, id == 1 ? 2 : 1);
//        }
//        else if (check[next] == id){
//            flag = false;
//            return;
//        }
//    }
//}
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    cin >> K;
//
//    while(K--) {
//        clear();
//        int V, E;
//        cin >> V >> E;
//
//        while(E--) {
//            int a, b;
//            cin >> a >> b;
//
//            v[a].push_back(b);
//            v[b].push_back(a);
//
//            for(int i = 1; i < V; i++) {
//                if (check[i] == 0) {
//                    dfs(i, 1);
//                }
//            }
//
//            cout << (flag == false) ? "NO" : "YES";
//        }
//    }
//
//    return 0;
//}
