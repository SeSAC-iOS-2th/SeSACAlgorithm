//
//  BJ16953.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/19.
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//using ll = long long;
//int A, B;
//queue<ll> q;
//map<ll, ll> mp;
//
//
//bool checkValid(int x) {
//    return (x >= 1 && x <= 1000000000);
//}
//
//int bfs() {
//    q.push(A);
//    mp[A] = 1;
//
//    while(q.size()) {
//        ll here = q.front();
//        q.pop();
//
//        for(int i = 0; i < 2; i++) {
//            ll next;
//            if (i == 0) {
//                next = here * 2;
//            } else {
//                next = here * 10 + 1;
//            }
//
//            if (checkValid(next) == false) { continue; }
//
//            if (mp[next] == 0) {
//                mp[next] = mp[here] + 1;
//                q.push(next);
//            }
//        }
//    }
//
//    return (mp[B] == 0) ? -1 : mp[B];
//}
//
//int main(int argc, const char* argv[]) {
//
//    cin >> A >> B;
//
//    cout << bfs() << '\n';
//
//
//    return 0;
//}
