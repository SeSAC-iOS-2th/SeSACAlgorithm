//
//  BJ2851.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//vector<int> v;
//
//int marioGame() {
//    int min, max;
//    int result = 0;
//
//    for(int i = 0; ; i++) {
//        min = result;
//
//        result += v[i];
//
//        if (result > 100) {
//            max = result;
//            break;
//        }
//
//    }
//
//    return (max - 100 <= 100 - min) ? max : min;
//}
//
//int main(int argc, const char* argv[]) {
//
//    for(int i = 0; i < 10; i++) {
//
//        int num;
//        cin >> num;
//
//        v.push_back(num);
//    }
//
//    cout << marioGame() << '\n';
//
//    return 0;
//}
