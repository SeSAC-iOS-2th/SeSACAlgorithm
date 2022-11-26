//
//  BJ1475.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//string num;
//vector<char> v;
//map<char, int> mp;
//int result = 0;
//
//int numOfSet() {
//    
//    for(int i = 0; i < v.size(); i++) {
//        if (mp[v[i]] > result) { result = mp[v[i]]; }
//    }
//    
//    return result;
//}
//
//void setMp() {
//    if ((mp['6'] + mp['9']) % 2 == 0) {
//        mp['6'] = (mp['6'] + mp['9']) / 2;
//        mp['9'] = mp['6'];
//    } else {
//        mp['6'] = (mp['6'] + mp['9'] + 1) / 2;
//        mp['9'] = mp['6'];
//    }
//}
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> num;
//    for(int i = 0; i < num.length(); i++) {
//        v.push_back(num[i]);
//        
//        mp[num[i]] ++;
//    }
//    
//    setMp();
//    
//    cout << numOfSet() << '\n';
//    
//    return 0;
//}
