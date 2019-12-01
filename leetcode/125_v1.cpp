//
//  125_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        for(char c:s){
            if(c >='0' && c<='9'){
                ss.push_back(c);
            }
            if(c>='A' && c<='Z'){
                ss.push_back(c+32);
            }
            if(c>='a' && c<='z'){
                ss.push_back(c);
            }
        }
        string tmp =ss;
        reverse(ss.begin(),ss.end());
        return tmp==ss;
    }
};
