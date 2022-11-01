//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    
    string str;
    cin >> str;
    
    for(int i = 0; i < str.length(); i++) {
        if (str[i] > 90) {
            str[i] -= 32;
        } else {
            str[i] += 32;
        }
    }
    
    cout << str << "\n";
    
    return 0;
}
