//
//  35_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 8 ms, faster than 59.55% of C++ online submissions for Search Insert Position.
//  Memory Usage: 9 MB, less than 57.81% of C++ online submissions for Search Insert Position.

#include <stdio.h>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(target>nums[len-1]) return len;
        for(int i = 0;i<len;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return 0;
    }
};
