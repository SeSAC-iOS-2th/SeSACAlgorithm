//
//  BJ1931.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/26.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//map<int, int> mp;
//int cnt = 0;
//int endTime = 0;
//
//struct t {
//    int start, end;
//};
//
//bool cmp(t a, t b){
//    if(a.end == b.end){
//        return a.start < b.start;
//    }
//    return a.end < b.end;
//}
//
//vector<t> v;
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> N;
//    
//    while(N--) {
//        int start, end;
//        cin >> start >> end;
//        
//        v.push_back({start, end});
//    }
//    
//    sort(v.begin(), v.end(), cmp);
//    
//    for(int i = 0; i < v.size(); i++) {
//        if (v[i].start >= endTime) {
//            endTime = v[i].end;
//            cnt++;
//            //cout << v[i].start << ' ' << v[i].end << '\n';
//        }
//    }
//    
//    cout << cnt << '\n';
//    
//    
//    return 0;
//}
