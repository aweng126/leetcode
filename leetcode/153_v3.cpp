//
//  153_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l= 0, r = nums.size()-1;
        while( l < r){
            int mid = l +(r-l)/2;
            if(nums[mid] < nums[r]){
                r= mid;
            }else{
                l = mid+1;
            }
        }
        return nums[l];
    }
};
