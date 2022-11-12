//
//  BJ4963.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

#include "bits/stdc++.h"

using namespace std;

int w, h, cnt;
int arr[50][50];
bool check[50][50];

void clear() {
    for(int i = 0; i < 50; i++) {
        for(int j = 0; j < 50; j++) {
            arr[j][i] = 0;
            check[j][i] = false;
        }
    }
}
    
bool in(int y, int x) {
    return 0 <= x && x <= w - 1 && 0 <= y && y <= h - 1;
}

void dfs(int y, int x, int cnt) {
    check[y][x] = true;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int dx[3] = {1, 0, -1};
            int dy[3] = {1, 0, -1};
            int next_x = x + dx[i];
            int next_y = y + dy[j];
            
            if(i == 1 && j == 1) { continue; }
            if(in(next_y, next_x) && check[next_y][next_x] == false && arr[next_y][next_x] == 1) {
                dfs(next_y, next_x, cnt);
            }
        }
    }
}


int main(int argc, const char* argv[]) {
    ios::sync_with_stdio(0); cin.tie(0);

    while(1) {
        clear();
        cin >> h >> w;
        if (w == 0 && h == 0) { break; }
        
        for(int i = 0; i < w; i++) {
            for(int j = 0; j < h; j++) {
                char c;
                cin >> c;
                if (c == '1') { arr[j][i] = 1; }
            }
        }
        
        for(int i = 0; i < w; i++) {
            for(int j = 0; j < h; j++) {
                if(arr[j][i] == 1 && check[j][i] == false) {
                    dfs(j, i, cnt++);
                }
            }
        }
        
        cout << cnt << '\n';
        cnt = 0;
    }
        
    return 0;
}
