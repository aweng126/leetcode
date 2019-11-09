//
//  376_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/9.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size();
        if(len < 2) return len;
        int flag = -1;
        int res = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i] > nums[i-1] &&((flag == -1) ||flag == 1)){
                flag = 0;
                res++;
            }else if(nums[i] < nums[i-1] &&((flag == -1) ||flag == 0)){
                flag = 1;
                res++;
            }
        }
        return res;
    }
};
