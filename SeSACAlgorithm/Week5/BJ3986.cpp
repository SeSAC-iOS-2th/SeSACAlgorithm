//
//  BJ3986.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//stack<char> stk;
//
//void resetStack() {
//    while(stk.size()!=0) {
//        stk.pop();
//    }
//}
//
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N;
//    int count = 0;
//    
//    while(N--) {
//        string str;
//        cin >> str;
//        
//        for(int i = 0; i < str.length(); i++) {
//            if (i == 0) {
//                stk.push(str[i]);
//            } else {
//                if (stk.size() && str[i] == stk.top()) {
//                    stk.pop();
//                } else {
//                    stk.push(str[i]);
//                }
//            }
//        }
//        
//        if (stk.size() == 0) { count ++; }
//        
//        resetStack();
//    }
//    
//    cout << count << '\n';
//    
//    return 0;
//}
