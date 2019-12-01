//
//  125_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int l = 0,r=s.size()-1;
        while(l<r){
            if(!isdigit(s[l])&&!isalpha(s[l])) {l++;continue;}
            if(!isdigit(s[r])&&!isalpha(s[r])){r--;continue;}
            if(s[l]!=s[r]) {
                return false;
            }else{
                l++;r--;
            }
        }
        return true;
    }
};
