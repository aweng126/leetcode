//
//  81_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/6.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        auto a = find(nums.begin(),nums.end(),target);
        return a==nums.end()?false:true;
    }
};
