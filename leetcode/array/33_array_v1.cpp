//
//  33_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 4 ms, faster than 79.03% of C++ online submissions for Search in Rotated Sorted Array.
//  Memory Usage: 8.9 MB, less than 49.40% of C++ online submissions for Search in Rotated Sorted Array.

#include <stdio.h>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
