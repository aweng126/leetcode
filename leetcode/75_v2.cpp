//
//  75_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
       vector<int> arr(3,0);
       for(int a:nums){
           arr[a]++;
       }
       int p = 0;
       for(int i = 0;i<3;i++){
           while(arr[i]>0){
               nums[p]= i;
               p++;
               arr[i]--;
           }
       }
    }
};
