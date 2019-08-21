//
//  27_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 4 ms, faster than 71.13% of C++ online submissions for Remove Element.
//  Memory Usage: 8.6 MB, less than 86.76% of C++ online submissions for Remove Element.


/*
 利用了stl（标准模版库）中的方法，非常简单
 remove：返回的结果是去除了对应值的结尾的itertor。
 */
#include <stdio.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        return std::distance(nums.begin(),std::remove(nums.begin(),nums.end(),val));
    }
};
