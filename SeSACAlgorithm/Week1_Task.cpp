//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int N;
    cin >> N;
    
    int count = 0;
    int* p = new int[N];
    
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        p[i] = num;
    }
    
    int V;
    cin >> V;
    
    for(int i = 0; i < N; i++) {
        if (V == p[i]) {
            count ++;
        }
    }
    
    delete[] p;
    
    cout << count << "\n";
    
    return 0;
}
