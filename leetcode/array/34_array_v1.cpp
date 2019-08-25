//
//  34_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 8 ms, faster than 84.68% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
//  Memory Usage: 10.1 MB, less than 100.00% of C++ online submissions for Find First and Last Position of Element in Sorted Array.

#include <stdio.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int b =-1,e=-1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                b=i;
                break;
            }
        }
        
        for(int j = nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                e=j;
                break;
            }
        }
        
        return {b,e};
    }
};
