//
//  154_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
//  使用unique来去除重复元素，从而将题目转化成为153题。进行解决。

#include <stdio.h>
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        auto it = unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[mid+1]){
                return min(nums[0],nums[mid+1]);
            }else if(nums[mid] < nums[r]){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return min(nums[0],nums[l]);
    }
};
