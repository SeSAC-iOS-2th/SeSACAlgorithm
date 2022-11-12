//
//  BJ5800.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/12.
//

//#include "bits/stdc++.h"
//
//using namespace std;
//
//int K;
//
//int largest_gap(vector<int> v) {
//    int result = 0;
//        
//    for(int i = 0; i < v.size() - 1; i++) {
//        if (v[i + 1] - v[i] > result) { result = v[i + 1] - v[i]; }
//    }
//    
//    return result;
//}
//
//int main(int argc, const char* argv[]) {
//    
//    cin >> K;
//    
//    for(int i = 1; i <= K; i++) {
//        int N;
//        int Max, Min, Largest_gap;
//        vector<int> v;
//        
//        cin >> N;
//        
//        while(N--) {
//            int p;
//            cin >> p;
//            v.push_back(p);
//        }
//        
//        sort(v.begin(), v.end());
//        
//        Max = v[v.size() - 1];
//        Min = v[0];
//        Largest_gap = largest_gap(v);
//        
//        cout << "Class " << i << "\n";
//        cout << "Max " << Max << ", ";
//        cout << "Min " << Min << ", ";
//        cout << "Largest gap " << Largest_gap << "\n";
//    }
//    
//    
//    return 0;
//}
