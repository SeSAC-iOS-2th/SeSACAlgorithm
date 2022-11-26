////
////  BJ22993.cpp
////  SeSACAlgorithm
////
////  Created by 이중원 on 2022/11/26.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//using ll = long long;
//
//int N;
//ll junwonA;
//vector<ll> v;
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//    bool result = true;
//
//    for(int i = 0; i < N; i++) {
//        int A;
//        cin >> A;
//        if (i == 0) {
//            junwonA = A;
//        } else {
//            v.push_back(A);
//        }
//    }
//
//    sort(v.begin(), v.end());
//
//    for(int i = 0; i < v.size(); i++) {
//        if (junwonA > v[i]) {
//            junwonA += v[i];
//        } else {
//            result = false;
//            break;
//        }
//    }
//
//    cout << ((result == true) ? "Yes" : "No");
//
//    return 0;
//}
