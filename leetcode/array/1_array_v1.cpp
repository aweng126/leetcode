//
//  1_array.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0;i<nums.size();i++){
            int var = target - nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(var == nums[j]){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};
