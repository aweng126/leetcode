//
//  136_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto num:nums){
            res ^= num;
        }
        return res;
    }
};
