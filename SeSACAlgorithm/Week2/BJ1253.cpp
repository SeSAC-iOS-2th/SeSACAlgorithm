//
//  BJ1253.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//int N;
//vector<int> v;
//map<int, int> mp;

//void goodNum() {
//
//    for(int i = 0; i < v.size(); i++) {
//        for(int j = i + 1; j < v.size(); j++) {
//            int left = 0, right = v.size() - 1;
//
//            while(left <= right) {
//                int mid = (left + right) / 2;
//
//                if ((mid == i) || (mid == j)) { continue; }
//
//                if (v[i] + v[j] > v[mid]) {
//                    left = mid + 1;
//                } else if ( v[i] + v[j] < v[mid]) {
//                    right = mid - 1;
//                } else {
//                    mp.insert({mid, 1});
//                    break;
//                }
//            }
//
//        }
//    }
//}

//int main(int argc, const char* argv[]) {
//
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
//    for(int i = 0; i < v.size() - 1; i++) {
//        for(int j = i + 1; j < v.size(); j++) {
//            int left = 0, right = v.size() - 1;
//
//            while(left <= right) {
//                int mid = (left + right) / 2;
//
//                //if ((mid == i) || (mid == j)) { break; }
//
//                if (v[i] + v[j] > v[mid]) {
//                    left = mid + 1;
//                } else if ( v[i] + v[j] < v[mid]) {
//                    right = mid - 1;
//                } else {
//                    mp.insert({mid, 1});
//                    break;
//                }
//            }
//        }
//    }
//
//    cout << mp.size() << "\n";
//
//
//    return 0;
//}
