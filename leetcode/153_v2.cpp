//
//  153_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
// 在已经变化了的区间之内找最小值（和163题找局部最大值刚好相反），
// 然后和最开始的元素进行对比，返回最小值。

#include <stdio.h>
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l= 0, r = nums.size()-1;
        while( l < r){
            int mid = l +(r-l)/2;
            if(nums[mid] > nums[mid+1] ){
                return min(nums[0],nums[mid+1]);
            }else if(nums[mid] < nums[r]){
                r= mid;
            }else{
                l = mid+1;
            }
        }
        return min(nums[0],nums[l]);
    }
};
