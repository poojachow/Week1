//
//  main.cpp
//  Week1ArraysStrings
//
//  Created by Pooja Chowdhary on 7/17/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int isPalindrome(string A) {
    
    string B = "";
    for (string::iterator it = A.begin(); it != A.end(); it++) {
        char temp = A.at(it-A.begin());
        if (isalnum(temp)) {
            B += tolower(temp);
        }
    }
    
    string::iterator it1 = B.end()-1;
    for (string::iterator it = B.begin(); it < it1; it++, it1--) {
        if (B.at(it-B.begin()) != B.at(it1-B.begin())) {
            return 0;
        }
    }
    
    return 1;
}


//int main(int argc, const char * argv[]) {
//    string A = "race a car";
//    cout << isPalindrome(A);
//
//    return 0;
//}
