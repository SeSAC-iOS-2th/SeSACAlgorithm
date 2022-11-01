//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>
#include <set>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int T;
    cin >> T;
    
    while(T--) {
        char first;
        char last;
        
        string str;
        cin >> str;
        
        first = str[0];
        last = str[str.length() - 1];
        
        cout << first << last << "\n";
    }
    
        
    return 0;
}
