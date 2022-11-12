//
//  BJ3036.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//vector<int> v;
//
//int maxGong(int a, int b) {
//    int min = (a < b) ? a : b;
//
//    do {
//        if ((a % min == 0) && (b % min == 0)) {
//            break;
//        }
//    } while(min--);
//
//    return min;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//
//    int firstRing = 0;
//
//    for(int i = 0; i < N; i++) {
//        int num;
//        cin >> num;
//
//        if(i == 0) { firstRing = num; }
//        else { v.push_back(num); }
//    }
//
//    for(int i = 0; i < v.size(); i++) {
//        int gong = maxGong(firstRing, v[i]);
//
//        cout << (firstRing/gong) << "/" << (v[i]/gong) << "\n";
//
//    }
//
//    return 0;
//}
