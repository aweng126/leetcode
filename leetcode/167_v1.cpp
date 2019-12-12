//
//  167_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size()==0) return {};
        for(int i = 0;i<numbers.size();i++){
            int temp = target-numbers[i];
            auto a = find(numbers.begin()+i+1,numbers.end(),temp);
            if(a != numbers.end()){
                int index = distance(numbers.begin(),a);
                return {i+1,index+1};
            }
        }
        return {};
    }
};
