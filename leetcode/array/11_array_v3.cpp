//
//  11_array_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result =0;
        int len = height.size();
        int i=0,j=len-1;
        while(i<j){
            int h = min(height[i],height[j]);
            result = max(result,h*(j-i));
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        
        return result;
        
    }
};
