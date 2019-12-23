//
//  154_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(),nums.end());
    }
};
