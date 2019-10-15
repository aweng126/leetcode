//
//  3_v2.cpp
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
        unordered_map<char,int> set;
        int l=0;
        int res =0;
        for(int r =0;r<len;r++){
            if(set.count(s[r])){
                l=max(l,set[s[r]]+1);
            }
            set[s[r]] = r;
            res = max(res,r-l+1);
        }
        return res;
    }
};
