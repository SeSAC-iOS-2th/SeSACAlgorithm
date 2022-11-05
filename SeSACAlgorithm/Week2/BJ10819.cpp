//
//  BJ10819.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include "math.h"
//
//using namespace std;
//
//int N;
//vector<int> v;
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N;
//    int max = 0;
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
//    do{
//        int cal = 0;
//        for(int i = 0; i < v.size() - 1; i++) {
//            cal += abs(v[i] - v[i + 1]);
//        }
//        if (cal >= max) { max = cal; }
//    }while(next_permutation(v.begin(), v.end())); //next_permutation 함수를 쓰기 위해선 꼭! 정렬 해줘야 한다!!
//
//    cout << max << "\n";
//
//    return 0;
//}
