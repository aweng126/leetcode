//
//  18_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        if(len<4) return {};
        vector<vector<int>> result;
        for(int i =0;i<len;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<len;j++){
                int k = j+1, g=len-1;
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                while(k<g){
                    int add = nums[i]+nums[j]+nums[k]+nums[g];
                    if(add < target){
                        k++;
                    }else if(add >target){
                        g--;
                    }else{
                        result.push_back({nums[i],nums[j],nums[k],nums[g]});
                        while(k<g && nums[k]==nums[k+1]) k++;
                        while(k<g && nums[g]==nums[g-1]) g--;
                        k++;  g--;
                    }
                }
            }
        }
        return result;
    }
};18
