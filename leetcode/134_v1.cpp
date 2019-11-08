//
//  134_v1.cpp
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
        int station;
        int j = 0;
        
        for(int i = 0; i < len; i++){
            station = i;
            int tank = gas[i]-cost[i];
            while(tank >= 0 && j<len ){
               station = (station+1)%len;
               tank = tank + gas[station] -cost[station];
               j++;
            }
            if(j == len){
                return station;
            }
            j = 0;
            
        }
        return -1;
       
    }
};
