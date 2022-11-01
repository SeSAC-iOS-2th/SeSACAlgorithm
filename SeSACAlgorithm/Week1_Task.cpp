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
    
    string grade;
    cin >> grade;
    
    double rate;
    
    if (grade == "A+") {
        rate = 4.3;
    } else if (grade == "A0") {
        rate = 4.0;
    } else if (grade == "A-") {
        rate = 3.7;
    } else if (grade == "B+") {
        rate = 3.3;
    } else if (grade == "B0") {
        rate = 3.0;
    } else if (grade == "B-") {
        rate = 2.7;
    } else if (grade == "C+") {
        rate = 2.3;
    } else if (grade == "C0") {
        rate = 2.0;
    } else if (grade == "C-") {
        rate = 1.7;
    } else if (grade == "D+") {
        rate = 1.3;
    } else if (grade == "D0") {
        rate = 1.0;
    } else if (grade == "D-") {
        rate = 0.7;
    } else {
        rate = 0.0;
    }
    
    //4.0이 4로 나오는 문제 해결
    //cout.setf(ios::showpoint);
    cout << fixed;
    cout.precision(1);
    cout << rate << "\n";
    
    return 0;
}
