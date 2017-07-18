//
//  main.cpp
//  Week1ArraysStrings
//
//  Created by Pooja Chowdhary on 7/15/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//
//Set Matrix Zero

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int row = A.size();
    int column = A[0].size();
    bool rowFlag = false;
    bool colFlag = false;
    
    for (int i = 0; i < row; i++) {
        if (A[i][0] == 0) {
            rowFlag = true;
            break;
        }
    }
    
    for (int i = 0; i < column; i++) {
        if (A[0][i] == 0) {
               colFlag = true;
                break;
            }
    }
    
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < column; j++) {
            if (A[i][j] == 0) {
                
                A[0][j] = 0;
                A[i][0] = 0;
                
            }
        }
    }
    
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < column; j++) {
            if ((A[i][0] == 0) || (A[0][j] == 0)) {
                A[i][j] = 0;
            }
        }
    }
    
    if (rowFlag == true) {
        for (int i = 0; i < row; i++) {
            A[i][0] = 0;
        }
    }
    
    if (colFlag == true) {
        for (int i = 0; i < column; i++) {
            A[0][i] = 0;
        }
    }
    
}


//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//
////    vector<vector<int>> A = {{1, 0, 1}, {1, 1, 1}, {1, 1, 1}};
//    vector<vector<int>> A = {{1, 0, 1, 1}, {1, 1, 1, 1}};
//    
//    setZeroes(A);
//    
//    return 0;
//}
