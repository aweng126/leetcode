//
//  26_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 20 ms, faster than 93.03% of C++ online submissions for Remove Duplicates from Sorted Array.
//  Memory Usage: 9.8 MB, less than 97.50% of C++ online submissions for Remove Duplicates from Sorted Array.

#include <stdio.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len ==0) return 0;
        int result = 0 ;
        for(int i = 1;i<len;i++){
            if(nums[i]!=nums[result]){
                result++;
                nums[result]=nums[i];
            }
        }
        return result+1;
    }
};
