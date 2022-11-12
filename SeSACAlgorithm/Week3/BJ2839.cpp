//
//  BJ2839.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//
//int sugarDelivery(int N) {
//
//    int three = 0;
//    int five = 0;
//
//    while(N > 0) {
//        if (N % 5 == 0) {
//            five += N / 5;
//            break;
//        }
//
//        N -= 3;
//        three ++;
//    }
//
//    if (N < 0) { return -1; }
//
//    return three + five;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//
//    int result = sugarDelivery(N);
//
//    cout << result << "\n";
//
//    return 0;
//}
