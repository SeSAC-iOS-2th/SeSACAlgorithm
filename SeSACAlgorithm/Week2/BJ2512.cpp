//
//  BJ2512.cpp
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
//bool f(int x) {
//
//    int total = M;
//
//    for(int i = 0; i < v.size(); i++) {
//        if (v[i] >= x) {
//            total -= x;
//        } else {
//            total -= v[i];
//        }
//    }
//
//    return total >= 0;
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//
//    int max = 0;
//
//    while(N--) {
//        int request;
//        cin >> request;
//
//        if (request >= max) { max = request; }
//        v.push_back(request);
//    }
//
//    cin >> M;
//
//    int left = 0, right = max;
//    int answer = 0;
//
//    while(left <= right) {
//        int mid = (left + right) / 2;
//
//        if (f(mid)) {
//            answer = mid;
//            left = mid + 1;
//        } else {
//            right = mid - 1;
//        }
//    }
//
//    cout << answer << "\n";
//
//    return 0;
//}
