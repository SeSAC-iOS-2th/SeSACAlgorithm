//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    
    long A, B;
    cin >> A >> B;
    
    long result;
    
    result = (A + B) * (A - B);
    
    cout << result << "\n";
        
    return 0;
}
