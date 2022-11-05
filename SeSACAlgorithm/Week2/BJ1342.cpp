////
////  BJ1342.cpp
////  SeSACAlgorithm
////
////  Created by 이중원 on 2022/11/05.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<char> v;
//string str;
//
//int main(int argc, const char* argv[]) {
//
//    cin >> str;
//
//    for(int i = 0; i < str.length(); i++) {
//        v.push_back(str[i]);
//    }
//
//    sort(v.begin(), v.end());
//
//    int count = 0;
//
//    do {
//        int tmp = 0;
//        for(int i = 0; i < v.size(); i++) {
//            if (v[i] == v[i + 1]) { tmp = 1; }
//        }
//        if (tmp == 0) { count++;}
//    } while (next_permutation(v.begin(), v.end()));
//
//    cout << count << "\n";
//
//    return 0;
//}
