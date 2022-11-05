//
//  BJ2805.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//long long m;
//vector<int> v;
//
//bool f(int x){
//    long long sum = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] - x >= 0) {
//            sum += v[i] - x;
//        }
//    }
//
//    return sum >= m;
//}
//
//
//int main(int argc, const char* argv[]) {
//
//    cin >> n;
//    cin >> m;
//    int answer = 0;
//    int max = 0;
//
//    while(n--) {
//        int height;
//        cin >> height;
//
//        if (height >= max) { max = height; }
//
//        v.push_back(height);
//    }
//
//    int left = 0, right = max;
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
//    cout << answer << '\n';
//
//    return 0;
//}
