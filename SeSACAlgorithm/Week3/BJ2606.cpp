//
//  BJ2606.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int num, connectPair, cnt;
//
//vector<int> v[101];
//bool check[101];
//  
//void dfs(int node) {
//    cnt++;
//
//    check[node] = true;
//
//    for(int i = 0; i < v[node].size(); i++) {
//        int next = v[node][i];
//        if(check[next] == false) {
//            dfs(next);
//        }
//    }
//}
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    cin >> num;
//    cin >> connectPair;
//
//    while(connectPair--) {
//        int a, b;
//        cin >> a >> b;
//
//        v[a].push_back(b);
//        v[b].push_back(a);
//    }
//
//    dfs(1);
//
//    cout << cnt - 1 << '\n';
//
//    return 0;
//}
