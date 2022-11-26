//
//  BJ1463.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//int dp[1000001];
//
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N;
//    dp[1] = 0;
//    
//    for(int i = 2; i <= N; i++) {
//        dp[i] = dp[i - 1] + 1;
//        if(i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
//        if(i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
//    }
//    
//    cout << dp[N] << '\n';
//    
//    return 0;
//}
