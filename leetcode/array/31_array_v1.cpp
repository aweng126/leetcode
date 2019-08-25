//
//  31_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 8 ms, faster than 75.22% of C++ online submissions for Next Permutation.
//  Memory Usage: 8.7 MB, less than 81.72% of C++ online submissions for Next Permutation.

#include <stdio.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin(),nums.end());
        
    }
};
