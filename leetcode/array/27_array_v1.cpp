//
//  27_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 4 ms, faster than 71.13% of C++ online submissions for Remove Element.
//  Memory Usage: 8.6 MB, less than 67.65% of C++ online submissions for Remove Element.

#include <stdio.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[num]=nums[i];
                num++;
            }
        }
        return num;
    }
};
