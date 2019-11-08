//
//  135_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/30.
//  Copyright © 2019 李庆文. All rights reserved.
//  双向遍历。

#include <stdio.h>
class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        int res = 0;
        vector<int> arr(len,1);
        for(int i = 0;i < len-1; i++){
            if(ratings[i+1]>ratings[i]){
                arr[i+1] = arr[i]+1;
            }
        }
        
        for(int i = len-1; i>0; i--){
            if(ratings[i-1]>ratings[i]){
                arr[i-1] = max(arr[i]+1,arr[i-1]);
            }
        }
        
        for(int num : arr){
            res += num;
        }
        return res;
    }
};
