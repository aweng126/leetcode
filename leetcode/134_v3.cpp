//
//  134_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    
        int len = gas.size();
        int tank = 0, ans = 0, total = 0;
        for(int i = 0; i < len; i++){
            tank += gas[i] - cost[i];
            if(tank < 0){
                total += tank;
                ans = i+1;
                tank = 0;
            }
        }
        return (total+tank>=0)?ans:-1;
    }
};
