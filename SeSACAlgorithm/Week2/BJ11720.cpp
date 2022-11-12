//
//  BJ11720.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/07.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N, sum = 0;
//string str;
//vector<int> v;
//
//
//void returnSum(int index) {
//    if (index > v.size() - 1) { return; }
//    
//    sum += v[index];
//    
//    returnSum(index + 1);
//}
//
//int main(int argc, const char* argv[])
//{
//    
//    cin >> N;
//    cin >> str;
//    
//    for(int i = 0; i < str.length(); i++) {
//        v.push_back(int(str[i] - '0'));
//    }
//    
//    returnSum(0);
//    
//    cout << sum << "\n";
//    
//    return 0;
//}
