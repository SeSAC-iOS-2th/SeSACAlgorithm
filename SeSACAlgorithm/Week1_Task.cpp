//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//


//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    //정수가 최대 십만개까지 입력될 수 있기 때문에, 일일히 sort해주면 시간 초과..!! => 다른 자료구조 생각
//    int arr[100000];
//    int N;
//    cin >> N;
//
//    for(int i = 1; i <= N; i++) {
//        int x;
//        cin >> x;
//
//        arr[i - 1] = x;
//        sort(arr, arr + i);
//
//        if(i % 2 == 0) {
//            cout << arr[i / 2 - 1] << "\n";
//        } else {
//            cout << arr[i / 2] << "\n";
//        }
//    }
//
//    return 0;
//}

#include <iostream>
#include <queue>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int result = 0;
    
    while(N--) {
        int num;
        cin >> num;
        
        pq.push(num);
    }
    
    while(pq.size() != 1) {
        int first, second;
        first = pq.top();
        pq.pop();
        second = pq.top();
        pq.pop();
        
        result += first + second;
        pq.push(first + second);
        
    }
    
    cout << result << "\n";
    
    return 0;
}
