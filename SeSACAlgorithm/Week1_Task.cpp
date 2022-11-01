//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>
#include <queue>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int N;
    cin >> N;
    
    queue<int> generalQueue;
    queue<int> discardedQueue;
    
    for(int i = 1; i <= N; i++) {
        generalQueue.push(i);
    }
    
    while(generalQueue.size() != 1) {
        discardedQueue.push(generalQueue.front());
        generalQueue.pop();
        generalQueue.push(generalQueue.front());
        generalQueue.pop();
    }
    
    for(int i = 0; i < discardedQueue.size(); i++) {
        cout << discardedQueue.front() << " ";
        discardedQueue.push(discardedQueue.front());
        discardedQueue.pop();
    }
    
    cout << generalQueue.front() << " ";
    
    return 0;
}
