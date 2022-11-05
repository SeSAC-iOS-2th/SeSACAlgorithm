//
//  BJ1654.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int K, N;
//long long answer;
//vector<int> v;
//
//bool f(long long x) {
//    long long num = 0;
//
//    for(int i = 0; i < v.size(); i++) {
//        num += v[i] / x;
//    }
//
//    return num >= N;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> K >> N;
//    long long tmp = 0;
//
//    while(K--) {
//        int length;
//        cin >> length;
//
//        tmp += length;
//        v.push_back(length);
//    }
//
//    tmp /= N;
//
//    long long left = 1;
//    long long right = tmp;
//
//    while(left <= right) {
//        long long mid = (left + right) / 2;
//
//        if (f(mid)) {
//            answer = mid;
//            left = mid + 1;
//        } else {
//            right = mid - 1;
//        }
//
//    }
//
//    cout << answer << "\n";
//
//    return 0;
//}
