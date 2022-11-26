//
//  BJ1026.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//vector<int> vcA;
//vector<int> vcB;
//int result = 0;
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N;
//    int tmp = N;
//    
//    while(N--) {
//        int element;
//        cin >> element;
//        vcA.push_back(element);
//    }
//    
//    while(tmp--) {
//        int element;
//        cin >> element;
//        vcB.push_back(element);
//    }
//    
//    sort(vcA.begin(), vcA.end());
//    sort(vcB.begin(), vcB.end(), greater<int>());
//    
//    for(int i = 0; i < vcA.size(); i++) {
//        result += vcA[i] * vcB[i];
//    }
//    
//    cout << result << '\n';
//    
//    return 0;
//}
