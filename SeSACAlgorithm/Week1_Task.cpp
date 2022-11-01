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
    
    set<int> s;
    
    for(int i = 1; i <= 30; i++) {
        s.insert(i);
    }
    
    for(int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        
        if (s.count(x)) {
            s.erase(x);
        }
    }
    
    for(set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << "\n";
    }
    
    return 0;
}
