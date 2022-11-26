//
//  BJ9461.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//long long dp[101];
//int T;
//
//void setup() {
//    for(int i = 6; i < 101; i++) {
//        dp[i] = -1;
//    }
//
//    dp[1] = 1;
//    dp[2] = 1;
//    dp[3] = 1;
//    dp[4] = 2;
//    dp[5] = 2;
//}
//
//long long padoban(int n) {
//    if (dp[n] != -1) return dp[n];
//    dp[n] = padoban(n - 1) + padoban(n - 5);
//    return dp[n];
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> T;
//
//    setup();
//
//    while(T--) {
//        int n;
//        cin >> n;
//
//        cout << padoban(n) << '\n';
//    }
//
//    return 0;
//}
