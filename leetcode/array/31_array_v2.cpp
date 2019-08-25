//
//  31_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 8 ms, faster than 75.22% of C++ online submissions for Next Permutation.
//  Memory Usage: 8.7 MB, less than 73.12% of C++ online submissions for Next Permutation.

#include <stdio.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while(i>=1 && nums[i]<= nums[i-1]){
            i--;
        }
        i--;
        
        if(i>=0){
            int j = nums.size() -1;
            while(j>=1 && nums[j] <= nums[i]){
                j--;
            }
            
            //exchange
            int a = nums[i];
            nums[i] = nums[j];
            nums[j] = a;
            
            sort(nums.begin()+i+1,nums.end());
        }else{
            sort(nums.begin(),nums.end());
        }
    }
};
