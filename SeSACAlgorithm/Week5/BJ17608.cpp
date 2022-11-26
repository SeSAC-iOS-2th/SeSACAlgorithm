//
//  BJ17608.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//vector<int> v;
//int result = 1;
//
//int numOfMackdaegi() {
//    int max = v[v.size() - 1];
//
//    for(int i = v.size() - 2; i >= 0; i--) {
//        if (v[i] > max) {
//            max = v[i];
//            result ++;
//        }
//    }
//
//    return result;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//
//    while(N--) {
//        int h;
//        cin >> h;
//
//        v.push_back(h);
//    }
//
//    cout << numOfMackdaegi() << '\n';
//
//    return 0;
//}
