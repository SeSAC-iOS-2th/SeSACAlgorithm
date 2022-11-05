//
//  BJ3079.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, M;
//vector<int> v;
//
//bool f(long long x) {
//
//    long long count = 0;
//
//    for(int i = 0; i < v.size(); i++) {
//        count += x / v[i];
//    }
//
//    return count >= M;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N >> M;
//    long long max = 0;
//
//    while(N--) {
//        long long time;
//        cin >> time;
//
//        if (time >= max) { max = time; }
//        v.push_back(time);
//    }
//
//    max *= M;
//
//    long long left = 0, right = max, answer = 0;
//
//    while(left <= right) {
//        long long mid = (left + right) / 2;
//
//        if (f(mid)) {
//            answer = mid;
//            right = mid - 1;
//        } else {
//            left = mid + 1;
//        }
//
//    }
//
//    cout << answer << "\n";
//
//    return 0;
//}
