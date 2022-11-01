//
//  main.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/10/29.
//


//백준 10828
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    int N;
//    string command;
//
//    stack<int> s;
//
//    cin >> N;
//
//    while (N--) {
//        cin >> command;
//        int num;
//
//        if (command == "push") {
//            cin >> num;
//            s.push(num);
//        } else if (command == "pop") {
//            if (s.empty()) {
//                cout << -1 << "\n";
//            } else {
//                cout << s.top() << "\n";
//                s.pop();
//            }
//        } else if (command == "size") {
//            cout << s.size() << "\n";
//        } else if (command == "empty") {
//            if (s.empty()) {
//                cout << 1 << "\n";
//            } else {
//                cout << 0 << "\n";
//            }
//        } else if (command == "top") {
//            if (s.empty()) {
//                cout << -1 << "\n";
//            } else {
//                cout << s.top() << "\n";
//            }
//        }
//    }
//
//
//
//    return 0;
//}


//백준 9012
//미해결
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    int T;
//
//    cin >> T;
//
//    while (T--) {
//        stack<char> s;
//
//        string str;
//        cin >> str;
//        bool success = true;
//
//        for (int i = 0; i < str.size(); i++) {
//            char ch = str[i];
//            if (ch == ')' && s.size() == 0) {
//                success = false;
//                break;
//            } else if (ch == ')') {
//                s.pop();
//            } else {
//                s.push('(');
//            }
//        }
//        if(s.size() || success == false) {
//            cout << "NO\n";
//        } else {
//            cout << "YES\n";
//        }
//
//    }
//
//    return 0;
//}


//백준 10845

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//    int N;
//
//    queue<int> queue;
//
//    cin >> N;
//
//    while(N--) {
//        string str;
//        cin >> str;
//
//        int num;
//
//        if(str == "push") {
//
//            cin >> num;
//            queue.push(num);
//
//        } else if(str == "pop") {
//
//            if(queue.empty()) {
//                cout << -1 << "\n";
//            } else {
//                cout << queue.front() << "\n";
//                queue.pop();
//            }
//
//        } else if(str == "size") {
//
//            cout << queue.size() << "\n";
//
//        } else if(str == "empty") {
//
//            if(queue.empty()) {
//                cout << 1 << "\n";
//            } else {
//                cout << 0 << "\n";
//            }
//
//        } else if(str == "front") {
//
//            if(queue.empty()) {
//                cout << -1 << "\n";
//            } else {
//                cout << queue.front() << "\n";
//            }
//
//        } else if(str == "back") {
//
//            if(queue.empty()) {
//                cout << -1 << "\n";
//            } else {
//                cout << queue.back() << "\n";
//            }
//
//        }
//    }
//
//    return 0;
//}


//백준 1158

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    int N, K;
//    queue<int> generalQueue;
//    queue<int> resultQueue;
//
//    cin >> N >> K;
//
//    for(int i = 1; i <= N; i++) {
//        generalQueue.push(i);
//    }
//
//    while(N--) {
//        for(int i = 0; i < K - 1; i++) {
//            generalQueue.push(generalQueue.front());
//            generalQueue.pop();
//        }
//        resultQueue.push(generalQueue.front());
//        generalQueue.pop();
//
//    }
//
//    for(int i = 0; i < resultQueue.size(); i++) {
//        if (resultQueue.size() == 1) {
//            cout << "<1>\n";
//            break;
//        }
//        if (i == 0) {
//            cout << "<" << resultQueue.front() << ", ";
//        } else if (i == resultQueue.size() - 1) {
//            cout << resultQueue.front() << ">\n";
//        } else {
//            cout << resultQueue.front() << ", ";
//        }
//        resultQueue.push(resultQueue.front());
//        resultQueue.pop();
//    }
//
//    return 0;
//}


//백준 10816
//다시
//#include <iostream>
//#include <map>

//using namespace std;
//
//int main(int argc, const char* argv[]) {
//    ios::sync_with_stdio(0); cin.tie(0); //입출력을 빠르게 해주는 장치(?)
//
//    int N, M;
//    map<int,int> mp;
//
//    cin >> N;
//
//    for(int i = 1; i <= N; i++) {
//        int x;
//        cin >> x;
//
//        mp[x] ++;
//    }
//
//    cin >> M;
//
//    for(int i = 1; i <= M; i++) {
//        int x;
//        cin >> x;
//
//        cout << mp[x] << " ";
//    }
//
//    return 0;
//}


//백준 14425

//#include <iostream>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    int N, M;
//    set<string> st;
//    queue<string> queue;
//    int count = 0;
//
//    cin >> N >> M;
//
//    while(N--) {
//        string str;
//        cin >> str;
//
//        st.insert(str);
//    }
//
//    while(M--) {
//        string str;
//        cin >> str;
//
//        queue.push(str);
//    }
//
//    for(int i = 0; i < queue.size(); i++) {
//        if (st.count(queue.front())) {
//            count ++;
//        }
//        queue.push(queue.front());
//        queue.pop();
//    }
//
//
//    cout << count << " \n";
//
//    return 0;
//}


//백준 10815

//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    int N, M;
//    set<int> st;
//
//    cin >> N;
//
//    while(N--) {
//        int x;
//        cin >> x;
//
//        st.insert(x);
//    }
//
//    cin >> M;
//
//    while(M--) {
//        int x;
//        cin >> x;
//
//        cout << st.count(x) << " ";
//    }
//
//    return 0;
//}


//백준 11478

//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    set<string> st;
//
//    string str;
//    cin >> str;
//
//    for(int i = 0; i < str.length(); i++) {
//        for(int j = 1 ; j <= str.length(); j++) {
//            st.insert(str.substr(i, j));
//        }
//    }
//
//    cout << st.size() << "\n";
//
//    return 0;
//}


//백준 11279

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    priority_queue<int> pq;
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        int x;
//        cin >> x;
//
//        if (x == 0) {
//            if (pq.empty()) {
//                cout << 0 << "\n";
//            } else {
//                cout << pq.top() << "\n";
//                pq.pop();
//            }
//        } else {
//            pq.push(x);
//        }
//    }
//
//
//    return 0;
//}


//백준 1927

//#include <bits/stdc++.h>
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    ios::sync_with_stdio(0); cin.tie(0);
//
//    priority_queue<int> pq;
//
//    int N;
//    cin >> N;
//
//    while(N--) {
//        int x;
//        cin >> x;
//
//        if (x == 0) {
//            if (pq.empty()) {
//                cout << 0 << "\n";
//            } else {
//                cout << -pq.top() << "\n";
//                pq.pop();
//            }
//        } else {
//            pq.push(-x);
//        }
//    }
//
//
//    return 0;
//}


//백준 1764

//#include <iostream>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, const char* argv[]) {
//
//    int N, M;
//    cin >> N >> M;
//
//    int count = 0;
//
//    set<string> st;
//    priority_queue<string, vector<string>, greater<string>> pq;
//
//    int queueLength;
//
//    while(N--) {
//        string str;
//        cin >> str;
//
//        st.insert(str);
//    }
//
//    while(M--) {
//        string str;
//        cin >> str;
//
//        if (st.count(str)) {
//            count ++;
//            pq.push(str);
//        }
//    }
//
//    queueLength = int(pq.size());
//
//    cout << count << "\n";
//
//    for(int i = 0; i < queueLength; i++) {
//        cout << pq.top() << "\n";
//        pq.pop();
//    }
//
//
//    return 0;
//}
