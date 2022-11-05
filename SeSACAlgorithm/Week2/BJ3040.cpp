//
//  BJ3040.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<int> v;
//
//int main(int argc, const char* argv[]) {
//
//    int sum = 0;
//    int fake1, fake2;
//
//    for(int i = 0; i < 9; i++) {
//        int num;
//        cin >> num;
//
//        sum += num;
//        v.push_back(num);
//    }
//
//    for(int i = 0; i < 8; i++) {
//        for(int j = i + 1; j < 9; j++) {
//            if (sum - v[i] - v[j] == 100) {
//                fake1 = i;
//                fake2 = j;
//                break;
//            }
//        }
//    }
//
//    for(int i = 0; i < v.size(); i++) {
//        if ((i == fake1) || (i == fake2)) {
//            continue;
//        }
//        cout << v[i] << "\n";
//    }
//
//
//    return 0;
//}
