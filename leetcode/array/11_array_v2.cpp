//
//  11_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//  时间复杂度 O(N)
//  

#include <stdio.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result =0;
        int len = height.size();
        int i=0,j=len-1;
        while(i<j){
            int minh = min(height[i],height[j]);
            result = max(result,(j-i)*minh);
            while(height[i]<=minh && i<j) i++;
            while(height[j]<=minh && i<j) j--;
        }
        return result;
    }
};
