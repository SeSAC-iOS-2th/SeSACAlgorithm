//
//  BJ12755.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//vector<int> v;
//
//int getDegit(int x) {
//    int result = 0;
//    
//    while(x) {
//        x /= 10;
//        result++;
//    }
//    
//    return result;
//}
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N;
//    
//    for(int i = 1; ;i++) {
//        int degit = getDegit(i);
//        N -= degit;
//        if (N <= 0) {
//            for(int j = 0; j > N; j--) {
//                i /= 10;
//            }
//            cout << i % 10 << "\n";
//            return 0;
//        }
//    }
//    
//    return 0;
//}
