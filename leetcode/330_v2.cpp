//
//  330_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/9.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int res  = 0;
        long miss = 1, i = 0;
        while(miss <= n){
            if(i<nums.size() && nums[i] <= miss){
                miss += nums[i];
                i++;
            }else{
                miss += miss;
                res++;
            }
        }
        return res;
    }
};
