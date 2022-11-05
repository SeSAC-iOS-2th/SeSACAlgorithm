//
//  BJ1182.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/05.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, S, answer;
//vector<int> v;
//
//void partFibo(int index, int sum, bool flag) {
//    if (index == N) {
//        if (sum == S && flag == true) {
//            answer++;
//        }
//        return;
//    }
//    partFibo(index + 1, sum + v[index], true);
//    partFibo(index + 1, sum, flag);
//}
//
//
//int main(int argc, const char* argv[]) {
//
//    cin >> N >> S;
//
//    for(int i = 0; i < N; i++) {
//        int num;
//        cin >> num;
//
//        v.push_back(num);
//    }
//
//    partFibo(0, 0, false);
//    cout << answer << "\n";
//
//    return 0;
//}
