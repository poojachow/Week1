//
//  RomanToInteger.cpp
//  Week1ArraysStrings
//
//  Created by Pooja Chowdhary on 7/17/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;


int romanToInt(string A) {
    int num = 0;
    vector<int> arr;
    map<char, int> list = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = 0; i < A.length(); i++) {
        map<char, int>::iterator it = list.find(A[i]);
        if (it != list.end()) {
            arr.push_back(it->second);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if (i+1 < arr.size()) {
            // check next
            if (arr[i] < arr[i+1]) {
                num = num - arr[i];
            }
            else {
                num = num + arr[i];
            }
        }
        else {
            num = num + arr[i];
        }
    }
    return num;
}

//int main(int argc, const char * argv[]) {
//    string A = "XCVII";
//    cout << romanToInt(A) << endl;
//
//    return 0;
//}
