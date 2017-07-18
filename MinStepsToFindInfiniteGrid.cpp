//
//  MinStepsToFindInfiniteGrid.cpp
//  Week1ArraysStrings
//
//  Created by Pooja Chowdhary on 7/17/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int coverPoints(vector<int> &X, vector<int> &Y) {
    int path = 0;
    for (int i = 0; i < X.size()-1; i++) {
        int lenX = abs(X[i] - X[i+1]);
        int lenY = abs(Y[i] - Y[i+1]);
        int temp = lenX > lenY ? lenX : lenY;
        path = path+temp;
    }
    
    return path;
}

int main(int argc, const char * argv[]) {
    vector<int> x = {3, 0, 1, 2};
    vector<int> y = {3, 0, 1, 1};
    cout << coverPoints(x, y);
    
    return 0;
}
