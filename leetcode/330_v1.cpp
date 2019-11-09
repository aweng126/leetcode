//
//  330_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/9.
//  Copyright © 2019 李庆文. All rights reserved.
//  这个是一个思路版本，有报错信息，暂时还没有调试出来，主要问题在类型转换上。

#include <stdio.h>
class Solution {
public:
    long findzero(vector<long>& arr){
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0){
                return i;
            }
        }
        return arr.size();
    }
    
    int minPatches(vector<int>& nums, int n) {
        int res = 0;
        vector<long> arr(n+1,0);
        long long t = pow(2,nums.size());
        while(t>0){
            int add = 0;
            long long temp = t;
            for(int i = 0; i< nums.size();i++){
                if(temp & 1==1){
                    add += nums[i];
                }
                temp = temp>>1;
            }
            arr[add] = 1;
            t--;
        }
        long zeroindex = findzero(arr);
        while(zeroindex <= n){
            res++;
            arr[zeroindex] = res+1;
            for(int i = 1; i< arr.size();i++){
                if(arr[i]>0 &&arr[i]!= res+1 && i+zeroindex <= n && arr[i+zeroindex] == 0){
                    arr[i+zeroindex]=res+1;
                }
            }
            zeroindex = findzero(arr);
        }
        
        return res;
    }
};
