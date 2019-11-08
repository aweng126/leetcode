//
//  134_v4.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    
        int total = 0, sum = 0, res = 0;
        for(int i = 0 ;i < cost.size(); i++){
            total += gas[i] - cost[i];
            sum += gas[i] - cost[i];
            if(sum < 0){
                res = i+1;
                sum = 0;
            }
        }
        return (total>=0)?res:-1;
    }
};
