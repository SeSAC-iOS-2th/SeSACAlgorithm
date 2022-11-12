//
//  BJ10988.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/07.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//string str;
//vector<char> v;
//bool result;
//
//void isPalindrome(int index) {
//
//    int mid = (v.size() - 1) / 2;
//
//    if (index > mid) {
//        result = true;
//    }
//
//    if (v[index] != v[v.size() - index - 1]) {
//        cout << "하하 속앗징\n";
//        result = false;
//    } else {
//        cout << index << ' ' << v.size() - index - 1 << '\n';
//        cout << v[index] << ' ' << v[v.size() - index - 1];
//        cout << '\n';
//        isPalindrome(index + 1);
//    }
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> str;
//
//    for(int i = 0; i < str.length(); i++) {
//        v.push_back(str[i]);
//    }
//
//    isPalindrome(0);
//
//    cout << (result) ? 1 : 0 ;
//    cout << '\n';
//
//    return 0;
//}
