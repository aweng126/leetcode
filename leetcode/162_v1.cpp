//
//  162_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/22.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int l = 0,r = nums.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid] < nums[mid+1]){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        return l;
    }
};
