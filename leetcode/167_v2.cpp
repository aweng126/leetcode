//
//  167_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/12.
//  Copyright © 2019 李庆文. All rights reserved.
//  二分查找而已。

#include <stdio.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size()==0) return {};
        for(int i = 0;i<numbers.size()-1;i++){
            int temp = target-numbers[i];
            int target = findTarget(numbers,i+1,numbers.size()-1,temp);
            if(target!=-1){
                return{i+1,target+1};
            }
        }
        return {};
    }
    int findTarget(vector<int>& numbers,int l,int r,int target){
        if(l > r) return -1;
        int mid = (l+r)/2;
        if(numbers[mid] == target){
            return mid;
        }else if(numbers[mid] > target){
            return findTarget(numbers,l,mid-1,target);
        }else{
             return findTarget(numbers,mid+1,r,target);
        }
        return -1;
    }
};
