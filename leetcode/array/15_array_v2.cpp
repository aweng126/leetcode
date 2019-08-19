//
//  15_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 88 ms, faster than 98.08% of C++ online submissions for 3Sum.
//  Memory Usage: 14.5 MB, less than 100.00% of C++ online submissions for 3Sum.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        if(len<3||nums[0]>0||nums[len-1]<0)return {};
        
        vector<vector<int>> result;
        
        for(int i =0;i<len-2;i++){
            if(nums[i]>0) continue;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int a = i+1;
            int b = len-1;
            int target = 0-nums[i];
            while(a<b){
                if(nums[a]+nums[b]>target){
                    b--;
                }else if(nums[a]+nums[b]<target){
                    a++;
                }else{
                    result.push_back({nums[a],nums[b],nums[i]});
                    while(a<b && nums[a] == nums[a+1]) ++a;
                    while(a<b && nums[b] == nums[b-1]) --b;
                    a++;b--;
                }
                
            }
            
        }
        
        return result;
        
    }
};
