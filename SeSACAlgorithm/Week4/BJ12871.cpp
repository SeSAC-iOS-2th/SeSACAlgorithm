//
//  BJ12871.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//string s, t;
//string oS = "", oT = "";
//bool result = false;
//
//int minGong() {
//    int result = s.size();
//
//    while(result % t.size() != 0) {
//        result += s.size();
//    }
//
//    return result;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> s;
//    cin >> t;
//
//    int min = minGong();
//
//    while(oS.size() != min) {
//        oS += s;
//    }
//
//    while(oT.size() != min) {
//        oT += t;
//    }
//
//    cout << (oS == oT) ? 1 : 0 << '\n';
//
//    return 0;
//}
