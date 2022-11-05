//
//  BJ1920.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
////전역 변수로 선언, parameter로 v 넣는 것도 시간 초과 요인이 될 수 있음.
//vector<int> v;
//bool isInVector(int num) {
//
//    bool isIn = false;
//
//    int left = 0, right = int(v.size() - 1);
//
//    while(left <= right) {
//        int mid = (left + right) / 2;
//
//        if (num < v[mid]) {
//            right = mid - 1;
//        } else if (num > v[mid]) {
//            left = mid + 1;
//        } else {
//            isIn = true;
//            break;
//        }
//    }
//
//    return isIn;
//}
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        int num;
//        cin >> num;
//
//        v.push_back(num);
//    }
//
//    sort(v.begin(), v.end());
//
//    int M;
//    cin >> M;
//
//    while(M--) {
//        int num;
//        cin >> num;
//
//        if (isInVector(num)) {
//            cout << 1 << "\n";
//        } else {
//            cout << 0 << "\n";
//        }
//    }
//
//    return 0;
//}
