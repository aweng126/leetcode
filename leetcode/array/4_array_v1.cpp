//
//  4_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/18.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums;
        int len = nums1.size()+nums2.size();
        nums.resize(len);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        sort(nums.begin(),nums.end());
        
        if(nums.size()%2==1){
            return (double)nums[len/2];
        }else{
            return (double)(nums[len/2]+nums[len/2-1])/2;
        }
        
    }
};
