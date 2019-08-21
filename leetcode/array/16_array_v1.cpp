//
//  16_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        if(len<3) return 0;
        int result =  nums[0]+nums[1]+nums[2];
        if(len==3) return result;
        
        sort(nums.begin(),nums.end());
        
        int mina = INT_MAX;
        for(int i =0;i<len;i++){
            int a= i+1,b=len-1;
            while(a<b){
                int now = nums[a]+nums[b]+nums[i]-target;
                if(abs(now)<abs(mina)){
                    mina = now;
                };
                
                if(now==0){
                    return target;
                } else if(now<0){
                    a++;
                }else{
                    b--;
                }
                
            }
        }
        return mina+target;
    }
};
