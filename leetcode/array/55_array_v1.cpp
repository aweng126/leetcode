//
//  55_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/9/3.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 28 ms, faster than 16.87% of C++ online submissions for Jump Game.
//  Memory Usage: 9.9 MB, less than 94.74% of C++ online submissions for Jump Game.

#include <stdio.h>
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        int max =nums[0];
        for(int i =0;i<n-1&&i<=max;i++){
            max = (nums[i]+i) > max?nums[i]+i:max;
            if(max>=n-1) return true;
            cout<<max<<endl;
        }
        return false;
    }
};
