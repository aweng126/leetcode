//
//  55_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/9/3.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 12 ms, faster than 71.34% of C++ online submissions for Jump Game.
//  Memory Usage: 9.7 MB, less than 100.00% of C++ online submissions for Jump Game.

#include "55_array_v2.hpp"
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size()-1;
        for(int i = last;i>=0;i--){
            if(nums[i]+i>=last){
                last =i;
            }
        }
        return last==0;
    }
};
