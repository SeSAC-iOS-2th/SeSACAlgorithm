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
    
    int a, b;
    cin >> a >> b;
    
    set<int> A;
    set<int> B;
    
    int count = 0;
    
    while(a--) {
        int x;
        cin >> x;
        
        A.insert(x);
    }
    
    while(b--) {
        int x;
        cin >> x;
        
        B.insert(x);
    }
    
    for(set<int>::iterator iter = B.begin(); iter != B.end(); iter++) {
        if (A.count(*iter)) {
            A.erase(*iter);
            count ++;
        }
    }
    
    cout << A.size() << "\n";
    
    for(set<int>::iterator iter = A.begin(); iter != A.end(); iter++) {
        cout << *iter << " ";
    }
    
    return 0;
}
