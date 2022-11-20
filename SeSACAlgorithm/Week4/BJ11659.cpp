//
//  BJ11659.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, M;
//vector<int> v;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(false);
//
//    cin >> N >> M;
//    int tmp = 0;
//
//    while(N--) {
//        int num;
//        cin >> num;
//
//        tmp += num;
//
//        v.push_back(tmp);
//    }
//
//    while (M--) {
//        int i, j;
//        cin >> i >> j;
//
//        if (i == 1) {
//            cout << v[j - 1] << '\n';
//        } else {
//            cout << v[j - 1] - v[i - 2] << '\n';
//        }
//    }
//
//    return 0;
//}
