//
//  219_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int tmp = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(!umap.count(nums[i])){
                umap[nums[i]] = i;
            }else{
                int n = i-umap[nums[i]];
                tmp = tmp>n?n:tmp;
                umap[nums[i]] = i;
            }
        }
        return tmp <= k;
    }
};
