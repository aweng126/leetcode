//
//  205_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slen = s.size();
        vector<int> sarr(128,0);
        vector<int> tarr(128,0);
        for(int i = 0;i<slen;i++){
            if(sarr[s[i]] != tarr[t[i]]) return false;
            sarr[s[i]] = i+1;
            tarr[t[i]] = i+1;
        }
        return true;
    }
};
