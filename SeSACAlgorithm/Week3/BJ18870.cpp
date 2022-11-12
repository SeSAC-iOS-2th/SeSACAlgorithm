//
//  BJ18870.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//vector<int> v1, v2;
//map<int, int> mp;
//
//int id;
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(0); cin.tie(0);
//    cin >> N;
//
//    while(N--) {
//        int x;
//        cin >> x;
//
//        v1.push_back(x);
//        v2.push_back(x);
//    }
//
//    sort(v2.begin(), v2.end());
//
//    for(int i = 0; i < v2.size(); i++) {
//        if (mp[v2[i]] == 0) {
//            id ++;
//            mp[v2[i]] = id;
//        }
//    }
//
//    for(int i = 0; i < v1.size(); i++) {
//        cout << mp[v1[i]] - 1 << ' ';
//    }
//
//    return 0;
//}
