//
//  136_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(auto a:nums){
            if(count(nums.begin(),nums.end(),a)==1){
                return a;
            }
        }
        return 0;
    }
};
