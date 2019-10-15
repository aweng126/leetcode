//
//  3_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/6.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if(len <= 1) return len;
        unordered_set<char> set;
        int r = 0,l = 0;
        int res = 0;
        while(r<len){
            while(set.count(s[r])){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            res = max(res,int(set.size()));
            r++;
        }
        return res;
    }
};
