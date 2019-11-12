//
//  344_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    void reverseString(vector<char>& s) {
        char a;
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            a = s[l];
            s[l] = s[r];
            s[r] = a;
            l++;r--;
        }
    }
};
