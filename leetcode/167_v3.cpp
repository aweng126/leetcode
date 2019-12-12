//
//  167_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res ={-1,-1};
        int left = 0, right = numbers.size()-1;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                return{left+1,right+1};
            }
            if(numbers[left] + numbers[right]  > target) {
                right --;
            }else{
                left++;
            }
        }
        return res;
    }
};
