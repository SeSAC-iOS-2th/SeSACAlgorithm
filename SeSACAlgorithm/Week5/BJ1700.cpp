//
//  BJ1700.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, K;
//vector<int> v;
//vector<int> tap;
//int cnt = 0;
//
//bool isInTap(int n) {
//    for(int i = 0; i < tap.size(); i++) {
//        if (tap[i] == n) {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//bool minimalScheduling(int n) {
////    int i;
////    if (N >= n) {
////        i = 0;
////    } else {
////        i = n-N;
////    }
//
//    for(int i = 0; i < n; i++) {
//        if (v[i] == v[n]) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N >> K;
//
//    while(K--) {
//        int e;
//        cin >> e;
//
//        v.push_back(e);
//    }
//
//    for(int i = 0; i < N; i++) {
//        tap.push_back(v[i]);
//    }
//
//    for(int i = N; i < v.size(); i++) {
//        if (isInTap(v[i]) == false && minimalScheduling(i) == false) {
//            cnt ++;
//        }
//    }
//
//    cout << cnt << '\n';
//
//    return 0;
//}
