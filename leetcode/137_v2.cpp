//
//  137_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/6.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one = 0,two = 0;
        for(int num:nums){
            one = ~two & (one^num);
            two = ~one & (two^num);
        }
        return one;
    }
};
