//
//  137_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/5.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mmap;
        for(int i :nums){
            mmap[i]++;
        }
        for(auto a:mmap){
            if(a.second == 1) return a.first;
        }
        return 0;
    }
};
