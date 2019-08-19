//
//  1_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/18.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>h;
        for(int i=0;i<nums.size();i++){
            auto a = nums[i];
            if(h.count(target-a)){
                return{h[target-a],i};
            }else{
                h[a]=i;
            }
        }
        return{0,0};
    }
};
