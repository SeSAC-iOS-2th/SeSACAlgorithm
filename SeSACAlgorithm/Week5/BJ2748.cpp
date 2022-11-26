//
//  BJ2748.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//using ll = long long;
//
//ll dp[91];
//int n;
//
//void setup() {
//    dp[0] = 0;
//    dp[1] = 1;
//    for(int i = 2; i < 91; i++) {
//        dp[i] = -1;
//    }
//}
//
//ll fibo(int n) {
//    if (dp[n] != -1) return dp[n];
//    dp[n] = fibo(n - 1) + fibo(n - 2);
//    return dp[n];
//}
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(false);
//    cin >> n;
//
//    setup();
//
//    cout << fibo(n) << '\n';
//
//    return 0;
//}
