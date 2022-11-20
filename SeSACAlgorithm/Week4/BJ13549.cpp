//
//  BJ13549.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//

#include "bits/stdc++.h"

using namespace std;

int N, K;
int sec[100001];
queue<int> q;

void initSec() {
    for(int i = 0; i < 100001; i++) {
        sec[i] = -1;
    }
}

bool checkValid(int x) {
    return (0 <= x && x <= 100000);
}

int bfs() {
    initSec();
    sec[N] = 0;
    q.push(N);
    
    while(q.size()) {
        
        int now = q.front();
        q.pop();
        
        for(int i = 0; i < 3; i++) {
            int next;
            int tag = 0;
            if (i == 0) {
                next = now * 2;
                tag = 1;
            } else if (i == 1) {
                next = now + 1;
            } else {
                next = now - 1;
            }
            
            if (checkValid(next) == false) { continue; }
            
            if (sec[next] == -1) {
                sec[next] = sec[now];
                if (tag == 0) { sec[next] ++; }
                q.push(next);
            } else {
                
            }
        }
    }
    return sec[K];
}

int main(int argc, const char* argv[]) {
    
    cin >> N >> K;
    
    cout << bfs() << '\n';
    
    
    return 0;
}
