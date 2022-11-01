//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int valid = 0;
    
    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        
        valid += x * x;
    }
    
    valid %= 10;
        
    cout << valid << "\n";
    
    return 0;
}
