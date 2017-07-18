//
//  main.cpp
//  Week1ArraysStrings
//
//  Created by Pooja Chowdhary on 7/16/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int nByThree(const vector<int> &A) {
    int value1 = 0, value2 = 0;
    int count1 = 0, count2 = 0;
    
    if (A.size() == 0) {
        return -1;
    }

    for (int i = 0; i < A.size(); i++) {
        if (value1 == A[i] || value2 == A[i]) {
            if (value1 == A[i]) {
                count1 += 1;
            }
            else {
                count2 += 1;
            }
        }
        else {
            if (count1 == 0 || count2 == 0) {
                if (count1 == 0) {
                    value1 = A[i];
                    count1 = 1;
                }
                else {
                    value2 = A[i];
                    count2 = 1;
                }
            }
            else {
                count1 -= 1;
                count2 -= 1;
            }
        }
    }
    

    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == value1) {
            temp1++;
        }
        if (A[i] == value2) {
            temp2++;
        }
    }
    
    if (temp1 > A.size()/3) {
        return value1;
    }
    else if (temp2 > A.size()/3) {
        return value2;
    }
    return -1;
    
}

//int main(int argc, const char * argv[]) {
//    
//    vector<int> A = {5, 5, 1, 2, 3, 5, 3, 4, 5};
//    cout << nByThree(A) << endl;
//
//    return 0;
//}
