//
//  BJ6236.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, M, sum, answer;
//vector<int> v;
//
//bool cashCash(int x) {
//    int myCash = x;
//    int count = 0;
//
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] > x) { return false; }
//        if (myCash < v[i]) {
//            myCash = x;
//            count ++;
//        }
//        myCash -= v[i];
//    }
//
//    return count + 1 <= M;
//}
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    cin >> N >> M;
//
//    while(N--) {
//        int cash;
//        cin >> cash;
//
//        v.push_back(cash);
//        sum += cash;
//    }
//
//    int left = 1, right = sum;
//
//    while(left <= right) {
//        int mid = (left + right) / 2;
//
//        if(cashCash(mid)) {
//            answer = mid;
//            right = mid - 1;
//        } else {
//            left = mid + 1;
//        }
//    }
//
//    cout << answer << '\n';
//
//    return 0;
//}
