//
//  11_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
// 时间复杂度：O(N^2)

#include <stdio.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result =0;
        int len = height.size();
        for(int i =0;i<len;i++){
            for(int j = len-1;j>i;j--){
                int var;
                if(height[j]>=height[i]){
                    var = height[i]*(j-i);
                }else{
                    var = height[j]*(j-i);
                }
                // cout<<var<<endl;
                result = var>=result?var:result;
            }
        }
        return result;
    }
};
